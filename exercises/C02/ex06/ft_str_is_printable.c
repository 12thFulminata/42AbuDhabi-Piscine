/*
Similar program as the previous ones where we use ASCII.
Checking only printable characters in a string, the best way is ASCII. Each character on keyboard has an encoding between 0 and 127 which is called as ASCII.
printable characters can be filtered out from other symbols using their ASCII code and vice versa


Intuition: Use ASCII, very simple implementation of ASCII range 32 to 126

*/


#include <stdio.h>

int ft_str_is_printable(char *str){
    int i=0;
    while(str[i]!='\0'){
        if(!(str[i]>=32 && str[i]<=126))
            return 0;
        i++;

    }
    return 1;


}

int main(){
    char *str="\a";
    printf("Is the string printable? : %d \n (1 for yes, 0 for no)", ft_str_is_printable(str));
}