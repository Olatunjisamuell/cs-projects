# Filter (C)

This project implements image processing filters including grayscale, sepia, horizontal reflection, and blur. Completed as part of Harvard’s CS50 course.

## Concepts Demonstrated

* 2D arrays and image representation in C
* Loops and nested loops
* Functions and modular programming
* Floating-point arithmetic and rounding
* RGB color manipulation
* Problem-solving and computational thinking

## How It Works

1. Applies various image filters on a given image represented as a 2D array of RGB pixels.
2. Filters implemented:

   * **Grayscale:** Converts an image to shades of gray by averaging the RGB values.
   * **Sepia:** Applies sepia toning using weighted sums of RGB values.
   * **Reflect:** Flips the image horizontally.
   * **Blur:** (Function stub included; can implement box blur for smoothing).
3. Each filter is implemented in a separate function, taking the image and its dimensions as input.

## How to Run

Compile your program along with `helpers.c` and any other necessary files:

```
gcc filter.c helpers.c -o filter -lcs50
```

Run the program (example usage will depend on your main driver program or test harness):

```
./filter input.bmp output.bmp
```

The filters will process the image and write the result to `output.bmp`.
