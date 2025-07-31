Comparing 2 strings based on their ASCII. Return difference immediately if they are unequal


Intuition : Almost the same as strcmp, just add the extra condition of checking up to n characters


What I learned :
1. Boundary checks are important or the parser will read beyond the string and result in ann error
2. Comparing different sized strings would mean one is smaller, empty or larger than the other so a separate section of code would be required for all three cases
