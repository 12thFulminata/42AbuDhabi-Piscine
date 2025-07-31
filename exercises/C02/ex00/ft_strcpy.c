
/*
strcpy copies a null terminated sring from a source to a given destination

To replicate it, you'd need 2 pointers and would have to iterate through each character of a string until you reach the end null string

Intuition : Make use of '\0' as it denotes the end of the string.
*/
#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
    int i=0;
    while(src[i] != '\0') //iterating through each characters of the string until you reach the end of the string
    {
        dest[i]=src[i]; // copying each src string characters into dest string
        i++;
    }
    dest[i]=src[i]; //if the source is empty, directly copy the empty string only
    return(dest); //return final
}
int main(){
    char src[]="Paris";
    char dest[]="AbuDhabi";
    printf("The string before swappping is : %s\n",dest);
    ft_strcpy(dest, src);
    printf("The final string after swappping is : %s",dest);

}

