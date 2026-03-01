# Readability (C)

This project implements a program to determine the reading grade level of a given text using the Coleman-Liau index. Completed as part of Harvard’s CS50 course.

## Concepts Demonstrated

* Loops (`for` loops) and conditional logic
* Functions and modular programming in C
* String handling (`strlen`, `isalpha`)
* Floating-point arithmetic and type casting
* Problem-solving and computational thinking

## How It Works

1. Prompts the user to enter a block of text.
2. Calculates the number of letters, words, and sentences in the text using separate functions.
3. Computes the Coleman-Liau index to determine the grade level.
4. Prints the grade level in the format:

   * `Before Grade 1` for index ≤ 1
   * `Grade 16+` for index ≥ 16
   * `Grade X` for grades in between

## How to Run

Compile the program:

```
gcc readability.c -o readability -lcs50
```

Run the program:

```
./readability
```

Then enter the text when prompted.
