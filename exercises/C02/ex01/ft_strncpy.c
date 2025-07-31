/*
strncpy copies n characters from src to destination.

If src is shorter than n, it "pads" the rest of the destination string with null characters "\0"

Intuition : Make sure the destination is big enough and simply copy the source and fill the rest with null to avoid overflow.
*/
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
    int i=0;

    //same as the program in ex00, just check for the size to make sure no small stack or overflow
    //iterating through each characters of the string until you reach the end of the string
    while(src[i]!='\0'&&i<n){
        dest[i]=src[i];// copying each src string characters into dest string
        i++;
    }
    return(dest);

}

int main(){
    char src[]="Paris";
    char dest[]="AbuDhabi";
    int n =4;

    ft_strncpy(dest,src,n);

    printf("Final Destination(Yes, pun intended) : %s",dest);
}
