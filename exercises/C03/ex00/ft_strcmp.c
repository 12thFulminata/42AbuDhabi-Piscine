/*

strcmp compares two strings based on their ASCII value
Intuition : Can be implemented by matching ASCII letter by letter and 
            Return the difference of the first characters that mismatch in both string
*/


#include <stdio.h>

/*

Trial function so I can understand the output
int main() {
    char *a = "fire";
    char *b = "water";
    
    printf("%d\n", strcmp(a, b)); 
    return 0;
}
*/

int ft_strcmp(char *s1, char *s2){
    int i =0;

    while(s1[i]&&s2[i]){ //Going through each hcharacter as long as it is not a null char
        if (s1[i]!=s2[i]){return (s1[i]-s2[i]);}// if in case not equal, return the difference of the first character that mismatches
        i++;
    }
    return (s1[i]-s2[i]); // returning the ASCII difference

}

int main(){
    char s1[10]="hello";
    char s2[10]="helLo";

    printf("%d",ft_strcmp(s1,s2));
}