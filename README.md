# String-IO

The given program reads strings from the standard input and prints them in decreasing order, marking duplicate strings. Here's a brief README description of the program:

1. Initialization:
   - The program includes the necessary header files and defines a character array `buf` with a size of 256.

2. Reading and Inserting Strings:
   - The program enters a loop where it reads strings from the standard input using `fgets`.
   - Each string is stored in the `str` variable.
   - The `insert` function is called to insert the string into a list data structure 

3. Reversing the List:
   - After all the strings are read and inserted, the `rev_list` function is called to reverse the order of the strings in the list.
   - The reversed list is not explicitly printed or manipulated further in the given code.

The program allows the user to input strings from the standard input, stores them in a list, and then prints the strings in decreasing order. Duplicate strings are marked in some way, although the exact marking mechanism is not shown in the given code. It relies on the functions `insert` and `rev_list` defined in the "mylist.h" header file, which handle the insertion and reversal operations, respectively.
