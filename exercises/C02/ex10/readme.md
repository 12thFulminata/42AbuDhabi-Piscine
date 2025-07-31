Replicating strlcpy

Intuition:  1. Figure out the length of the src
            2. If size is 0, dont copy anything, return the length of src as it is
            3. Otherwise, copy up to size-1 from src to dest
            4. Add null to destination everytime


What I learned:
1. Understanding buffer overflows and how to prevent them
2. Different copy commands in C (strcpy, stncpy and strlcpy) and their uses, advantages and disadvantages.