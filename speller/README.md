# Dictionary (C)

This project implements a spell-checking dictionary using a hash table and linked lists. Completed as part of Harvard’s CS50 course.

## Concepts Demonstrated

* Hash tables and collision handling using linked lists
* Dynamic memory allocation and deallocation (`malloc` and `free`)
* String handling and case-insensitive comparison (`strcasecmp`)
* File I/O for loading dictionaries (`fopen`, `fscanf`)
* Functions and modular programming in C
* Problem-solving and computational thinking

## How It Works

1. **Load:** Reads a dictionary file into memory, storing words in a hash table.
2. **Check:** Determines if a word exists in the dictionary (case-insensitive).
3. **Size:** Returns the number of words loaded.
4. **Unload:** Frees all dynamically allocated memory.
5. **Hash Function:** Converts a word to a hash value to determine its bucket in the hash table.

The hash table has 26 buckets, one for each letter of the alphabet, and handles collisions using linked lists.

## How to Run

Compile your program along with `dictionary.c` and any other necessary files:

```
gcc dictionary.c -o dictionary -lcs50
```

Run the program (example usage will depend on your driver program for spell-checking):

```
./dictionary text.txt dictionary.txt
```

The program will load the dictionary, check the words in the text file, and output results accordingly.
