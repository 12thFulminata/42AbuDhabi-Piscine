/*

Comparing 2 strings based on their ASCII. Return difference immediately if they are unequal
Intuition : Almost the same as strcmp, just add the extra condition of checking up to n characters
*/


#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n){

    unsigned int i=0;

    while (i<n && s1[i] && s2[i]) // checking as long as not null, same as s1[i] != '\0' && s2[i] != '\0' && i < n
    //looping with the added extra condition of i<n
    {
        if (s1[i]!=s2[i]){ //returning the ASCII difference if the characters are different in the strings
            return (s1[i]-s2[i]);
        }
        i++;
        
    }
    //if(len(s1[i])<len(s2[i]) || len(s2[i])<len(s1[i]))
    if(i<n){ //if one string ends before the other
        return (s1[i]-s2[i]);
    }

    return 0; // if all characters are equal, return 0

}

int main(){
    char s1[10]="waterr";
    char s2[10]="fiery";
    int n=4;
    printf("%d",ft_strncmp(s1,s2,n));
}