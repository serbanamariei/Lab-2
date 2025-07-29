# Lab 2 – Fundamentals of the C Language: Variables and Error Handling

This folder contains solved problems from Lab 2 of the "Programming Fundamentals" course.

## Topics Covered

- Declaring and using variables of types `int`, `float`, and `double`
- Reading input with `scanf` and printing output with `printf`
- Compilation, linking, and execution using `clang`
- Writing and using simple functions in C
- Using `math.h` and `sqrt` for mathematical operations
- Common compiler/linker errors and how to fix them

## Problems

### Part 1 – Basic Arithmetic
- Read two integers; compute and print their sum and arithmetic mean
- Read two doubles; compute and print their product and geometric mean
- Read three integers representing triangle sides; compute area using Heron’s formula

### Part 2 – Working with Code and Errors
- Modify and test behavior of programs by deleting lines/functions
- Understand compiler vs. linker errors

### Part 3 – Functional Decomposition
- Rewrite a program to use separate functions for I/O and computation

### Part 4 – Data Type Modifications
- Adapt a program by changing variable types from `int` to `double`

### Part 5 – Modular Programs with Functions
- Solve the same problems as in Part 1 using user-defined functions

## Build Instructions

To compile and link C programs, use:

```bash
clang -Wall -c file.c         # Compile to object file
clang file.o -Wall -o output  # Link object file into executable

If math.h is used (e.g for sqrt), link with:

```bash
clang file.o -lm -o output
