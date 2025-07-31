/*


Intuition : Count number of characters in src, add dest to the end, finally add a null pointer
*/


#include <stdio.h>

char *ft_strcat(char *dest, char *src){
    int src_char=0, dest_char=0;

    while (dest[dest_char]!='\0'){ //finding the length of dest string
    dest_char++;}

    while(src[src_char]!='\0'){
        dest[dest_char]=src[src_char]; //append characters from src to the end of destination
        src_char++;
        dest_char++;
    }
    //dest[src_char='\0'];
    dest[dest_char]='\0'; //after appending, when dest_char is at last character, add a null pointer

    return dest;
}

int main(){
    char src[10]="Dhabi";
    char dest[20]="Abu";


    printf("%s",ft_strcat(dest,src));
}