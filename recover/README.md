# Recover (C)

This project implements a program to recover JPEG images from a forensic image file. Completed as part of Harvard’s CS50 course.

## Concepts Demonstrated

* File I/O (`fopen`, `fread`, `fwrite`, `fclose`)
* Memory allocation (`malloc`, `free`)
* Bitwise operations for header detection
* Loops and conditional logic
* Problem-solving and computational thinking
* Type definitions (`typedef`) for clarity

## How It Works

1. The program takes the name of a forensic image file as a command-line argument.
2. Reads the file in 512-byte chunks to search for JPEG file signatures (headers).
3. When a JPEG header is detected, a new file is created and the image data is written to it.
4. Continues reading the file and writing data until the next JPEG header is found.
5. Repeats until the end of the input file, recovering all JPEG images.

## How to Run

Compile the program:

```
gcc recover.c -o recover -lcs50
```

Run the program with a forensic image file as input:

```
./recover card.raw
```

The program will create recovered JPEG files in the current directory, named `000.jpg`, `001.jpg`, etc.
