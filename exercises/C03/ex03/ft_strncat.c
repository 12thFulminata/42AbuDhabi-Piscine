/*

Intuition : Count number of characters in src, add dest to the end, finally add a null pointer
            Very similar to strcat, only one addition, add condition for n letters. Program copied from strcat one

*/


#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb){
    int src_char=0, dest_char=0;

    while (dest[dest_char]!='\0'){ //finding the length of dest string
    dest_char++;}

    while(src[src_char]!='\0' && src_char< nb){
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

    int n=4;


    printf("%s",ft_strncat(dest,src,4));
}