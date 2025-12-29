# C Programming Basics

This repository contains small C exercises developed as part of my
university-level learning path in programming at UNICT.

The goal of this repository is to practice core C concepts through
simple, focused programs, written with clarity and correctness in mind.

## Exercises

- `max_of_three.c`  
  Reads three integers from standard input and prints the maximum value
  using a dedicated function.

- `simple_calculator.c`  
  A basic calculator that reads two numbers and an operator
  (`+`, `-`, `*`, `/`) and performs the selected operation.
  Includes input validation and division-by-zero handling.

- `grade_evaluation.c`  
  Reads a letter grade (`A`, `B`, `C`, `D`, `F`) from input and prints
  a corresponding message using a `switch` statement.

- `student_struct.c`  
  Defines a `struct` to represent a student and initializes multiple
  instances with personal and academic data.

- `guessing_game.c`  
  A simple guessing game where the user has a limited number of attempts
  to guess a secret number using a `while` loop.

- `array_max.c`  
  Iterates over a one-dimensional integer array and prints the maximum
  value, using safe array size calculation.

## Concepts covered

- Functions
- Conditional statements (`if`, `switch`)
- Standard input/output (`scanf`, `printf`)
- Character input handling
- Basic error handling
- Arrays and iteration
- Program structure in C

## Compile and run

Example:
```bash
gcc simple_calculator.c -o simple_calculator
./simple_calculator
