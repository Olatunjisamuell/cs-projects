# Cash (C)

This project implements a program to calculate the minimum number of coins (quarters, dimes, nickels, pennies) needed to give a customer change. Completed as part of Harvard’s CS50 course.

## Concepts Demonstrated

* Conditional loops (`while` loops)
* Functions and modular programming in C
* Integer arithmetic and problem-solving logic
* User input validation (`do...while`)
* Memory-safe computation using basic C structures

## How It Works

1. Prompts the user to enter the amount of change owed (in cents).
2. Calculates the maximum number of quarters, then dimes, nickels, and pennies using separate functions.
3. Sums the total number of coins used.
4. Prints the result.

## How to Run

Compile the program:

```
gcc cash.c -o cash -lcs50
```

Run the program:

```
./cash
```

Then enter the amount of change owed when prompted.
