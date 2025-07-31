/*

The difference between a and A ascii is 32. Any alphabet can be convereted from lower to uppercase using this info

Intuition: The alphabets can be convereted to lower and uppercase by subtracting or adding 32

*/


#include <stdio.h>
char *ft_strupcase( char *str){
    int i=0;

    while ((str[i]!='\0'))
    {
        if(str[i]>='a' && str[i]<='z'){ //checking if character is lowercase
            str[i] = str[i]-32;
        // subtracting 32 from lowercase results in the uppercase character
    }
    i++;
    
}
return str;

}

int main(){
    char str[]="hE-llo worldz";
    return printf("Uppercase: %s\n", ft_strupcase(str));

   return 0;

}