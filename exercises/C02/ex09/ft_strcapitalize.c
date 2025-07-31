/*

Convert all letters to lowercase, except the first letter of every word.
Intuition: Best way would be to 
            1. convert everything to lowercase first
            2. Cycle through the string by checking the first word
                Can be done by looking at the previous character 
                Or by checking prev one not alphanumeral

*/


#include <stdio.h>
char *ft_strcapitalize(char *str){

    int i=0;
    while(str[i]!='\0'){ // if not null

    if(str[i]>='A' && str[i]<='Z')
    str[i]+=32; // converts all the letters to lowercase

    if (str[i]>= 'a' && str[i]<='z'){ //if lowercase then
        //checking for the first character, or when previous one isn't an alphabet or digit so we know what to capitalize
        if(i==0 || !((str[i-1]>='a' && str[i-1]<='z') || (str[i-1]>='A' && str[i-1]<='Z') || (str[i-1]>='0' && str[i-1]<='9')))
        {
            str[i]-=32; //capitalize because this current letter is the start of the new word
        }
    } i++;

} return str;
}

int main(){
    char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
    printf("The processed string is: %s\n", ft_strcapitalize(str));

}