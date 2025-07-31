/*

Checking alphabets in a string, the best way is ASCII. Each character on keyboard has an encoding between 0 and 127.
Alphabets can be filtered out from other symbols using their ASCII code and vice versa


Intuition: Use ASCII, make a note of the characters between 91-96 aka between 'Z' and 'a'

*/

#include <stdio.h>

int ft_str_is_alpha(char *str){
    int i =0;

    //check for empty string by checking the first letter
    if(str[i]=='\0'){
        return 1;
    }
    while(str[i]!='\0'){
        if(str[i]<'A'||str[i]>'z' || (str[i]>'Z'&&str[i]<'a'))
        // if the ASCII is less than 65 or greater than 122 and between 91 and 96
            return 0;
        i++;

    }
    return 1;
}

int main(){
    char str[10]="fi4re";
    printf("Checking for alpha: %d (1 = only alphabet or empty, 0 = contains others)\n", ft_str_is_alpha(str));
    return 0;

}