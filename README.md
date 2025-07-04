# Introductory C Programming Exercises – Unicamp

This repository contains a collection of independent C programs developed as part of the undergraduate course **MC102 – Algorithms and Computer Programming I**, offered by the University of Campinas (Unicamp). The main goal is to reinforce foundational programming concepts using the C language, through practical problem-solving exercises.

Each program is self-contained and focuses on a specific topic such as conditionals, loops, arrays, strings, structures, functions, and memory management.

---

## Contents

### Basic Logic and Control Structures
- `t03a.c`: Determines whether an integer is even or odd.
- `t03b.c`: Converts a date from `dd/mm/yyyy` format to a full-text representation in Portuguese.
- `t04a.c`: Prints squares of numbers from 1 to 20.
- `t04b.c`: Calculates combinations (C(n, k)) using factorial logic.
- `t04c.c`: Reads 10 integers and counts how many are even and how many are odd.

### Arrays and Sequential Data
- `t05a.c`: Searches for a specific float in a list of 20 values.
- `t05b.c`: Calculates total revenue and quantity sold using two float arrays.
- `t05c.c`: Reads and prints two integer arrays side-by-side.
- `t06a.c`: Reads a matrix column-wise and prints it row-wise.

### String Manipulation and Text Processing
- `t07a.c`: Reverses a string input.
- `t07b.c`: Checks if a given word is a palindrome (case-insensitive).

### Structures and Geometry
- `t08a.c`: Compares two 2D points for equality.
- `t08b.c`: Checks if one rectangle is completely contained within another.
- `t08c.c`: Calculates BMI from weight and height using a struct.

### Functions and Modularity
- `t09Aa.c`: Computes the volume of a sphere.
- `t09Ab.c`: Computes the average of two grades using either arithmetic or geometric mean.
- `t09Ac.c`: Simple calculator supporting +, -, *, /, and ^ operations using modular functions.
- `t09Ba.c`: Computes and prints the cube of each element in an array.
- `t09Bb.c`: Performs addition or multiplication of two complex numbers.
- `t09Bc.c`: Finds the maximum and minimum values in an integer array.

### Dynamic Memory and Structs
- `t10a.c`: Evaluates a polynomial using dynamically allocated arrays.
- `t10b.c`: Verifies if a dynamically allocated matrix is symmetric.
- `t10c.c`: Reads a list of students and prints their average grades using dynamic memory and structs.

### Larger Applications
- `AnalisadorDeSentimentos.c`: A sentiment analysis tool that evaluates the polarity (positive, negative, neutral) of paragraphs based on keyword lists. Supports multiple query types.
- `CompressorDePixels.c`: Analyzes a PPM image (P3 format) and compresses pixel data by mapping non-dominant colors to white.
- `Copas.c`: Simulates a simplified version of the card game Copas, including scoring and determining the winner.

---

## How to Compile and Run

Each file is self-contained and can be compiled using a standard GCC compiler:

```bash
gcc filename.c -o output
./output
```
