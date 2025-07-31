/*

Checking alphabets in a string, the best way is ASCII. Each character on keyboard has an encoding between 0 and 127.
Alphabets can be filtered out from other symbols using their ASCII code and vice versa

Intuition: Everything is the same as the last exercise ex002, the only difference is we use the ASCII for numbers instead of alphabets

*/

#include <stdio.h>

int ft_str_is_numeric(char *str){
    int i=0;

    while (str[i]!='\0')
    {
        if(!(str[i]>='0' && str[i]<='9'))
            return 0; // if character is ont a digit, return 0 immediately
        i++;
    }
    return 1; // if whole string is numeric, return 1 

}

int main(){
    char *str = "32d2";
    printf("Is the string completely numeric? %d (1 for yes, 0 for no)",ft_str_is_numeric(str));
    return 0;
    
}