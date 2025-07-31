strncpy copies n characters from src to destination.

If src is shorter than n, it "pads" the rest of the destination string with null characters "\0"

Intuition : Make sure the destination is big enough and simply copy the source and fill the rest with null to avoid overflow.


What I learned:
1. Implementing ieterations and operations on a string upto a given size or a substring
