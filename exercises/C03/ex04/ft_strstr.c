/*

Intuition : Loop through each character in string to check if it matches fully.
            If all match consecutively, return a pointer to the first match

*/


#include <stdio.h>


char *ft_strstr(char *str, char *to_find){
    int i=0,match=0;

    if(to_find[0] == '\0') //returning original string if empty
        {return str;}

    while(str[i]!='\0')
    {
        if(str[i]==to_find[0]) // while looping through the string, if current char matches the first char of to_find
        {
            match=0;
            //while(str[match]==to_find[match])
            //while(to_find[match]!='\0' && str[match]==to_find[match])
            while(to_find[match]!='\0' && str[i+match]==to_find[match])
                //comparing each matching character
                match++;

            if(to_find[match]=='\0')//in case we reach end and find null so return the str
                {return &str[i];}
        }
        i++;

    }
    return 0;

}

int main()
    {
        char str[]="Superman";
        char to_find[]="man";
        printf("%s", ft_strstr(str,to_find));
    }

/*

int main() {
    char str[] = "Superman";
    char to_find[] = "man";

    printf("%s", strstr(str, to_find));
    */