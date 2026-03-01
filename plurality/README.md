# Plurality (C)

This project implements a program to conduct a simple plurality election. Completed as part of Harvard’s CS50 course.

## Concepts Demonstrated

* Arrays and structs in C
* Loops and conditional logic
* Functions and modular programming
* String comparison (`strcmp`) and handling user input
* Problem-solving and computational thinking

## How It Works

1. The program takes candidate names as command-line arguments.
2. Prompts the user to enter the number of voters.
3. Loops through each voter, asking for their vote.
4. Validates votes and updates vote counts for candidates.
5. Determines the winner(s) based on the maximum number of votes and prints their names.

## How to Run

Compile the program:

```
gcc plurality.c -o plurality -lcs50
```

Run the program with candidate names as arguments:

```
./plurality Alice Bob Charlie
```

Follow the prompts to enter votes for each voter.
