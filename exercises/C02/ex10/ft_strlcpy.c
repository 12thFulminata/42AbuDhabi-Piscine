/*

Replicating strlcpy

Intuition:  1. Figure out the length of the src
            2. If size is 0, dont copy anything, return the length of src as it is
            3. Otherwise, copy up to size-1 from src to dest
            4. Add null to destination everytime
*/


#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){

    int len=0,i=0;
    while(src[len]!='\0'){ //finding out the lenght of the input source string
        len++;
    }

    if(size==0){ // if size is 0, do not copy anything, just return length of src
        return len;
    }
    while(src[i]!='\0' && i<(size-1)){ // copying characters from src to dest until size-1
        dest[i]=src[i];
        i++;

    }
    dest[i]='\0'; // adding a null character at the end as i++ changes the dest to +1 one last time for the last character
return len;
}

int main()
{
    char src[]="42AbuDhabi";
    int n=5;
    char dest[n];
    
    int result = ft_strlcpy(dest, src, n);

	printf("Output \nsrc: %s\ndes: %s\nsize: %d", src, dest, result);
}