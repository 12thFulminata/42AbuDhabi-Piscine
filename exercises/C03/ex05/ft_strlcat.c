/*

Intuition : If buffer size is less, no space left, keep that in mind and create a separate loop

*/


#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    int dest_len=0, src_len=0, i =0, total_len;


    while(src[src_len]!='\0')
        src_len++; //find the length of src 

    while (dest[dest_len]!='\0')
        dest_len++; // find the length of dest string

    if (size<=dest_len) // if size is smaller or equal, 
        {return size + src_len;} //otherwise buffer too small and no room to append

    while(src[i]!='\0'&&(dest_len+i+1)<size) //copy upto the formula-(size-dest_len-1)
    {
        dest[dest_len+i]=src[i];
        i++;
    }

    dest[dest_len+i]='\0'; //add null pointer at the end of the string

    return dest_len+src_len;
}