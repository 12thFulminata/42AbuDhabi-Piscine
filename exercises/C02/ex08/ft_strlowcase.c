/*

The difference between a and A ascii is 32. Any alphabet can be convereted from lower to uppercase using this info
Intuition: The alphabets can be convereted to lower and uppercase by subtracting or adding 32

*/


#include <stdio.h>
char *ft_strlowcase( char *str){
    int i=0;

    while ((str[i]!='\0'))
    {
        if(str[i]>='A' && str[i]<='Z'){ //checking if character is uppercase
            str[i] = str[i]+32;
        // Adding 32 to upper results in the lowercase character
    }
    i++;
    
}
return str;

}

int main(){
    char str[]="HelL-o WORLDZ";
    return printf("Lowercase: %s\n", ft_strlowcase(str));

   return 0;

}