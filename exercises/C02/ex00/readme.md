strcpy copies a null terminated sring from a source to a given destination

To replicate it, you'd need 2 pointers and would have to iterate through each character of a string until you reach the end null string

Intuition : Make use of '\0' as it denotes the end of the string.


What I learned:
1. Importance of null terminator and ending strings with it.
2. Copying strings through manual iteration