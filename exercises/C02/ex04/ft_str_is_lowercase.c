/*
Similar program compared to ex03 and 02 where we use ASCII.
Checking only lower case alphabets in a string, the best way is ASCII. Each character on keyboard has an encoding between 0 and 127 which is called as ASCII.
Lower case alphabets can be filtered out from other symbols using their ASCII code and vice versa


Intuition: Use ASCII, very simple implementation of ASCII range 97 to 122

*/

#include <stdio.h>

int ft_str_is_lowercase(char *str){
    int i=0;
    while(str[i]!='\0'){
        if(!(str[i]>='a' && str[i]<='z')) //checking if the character in the string has any alphabets not in the range of lower case
        return 0; // checking for not lower case is better and more efficient compared to doing the opposite
        i++;
    }
    return 1;

}
int main(){
    char *str="sadasdDa";
    printf("Is the string lowercase? : %d \n (1 for yes, 0 for no)", ft_str_is_lowercase(str));
}
