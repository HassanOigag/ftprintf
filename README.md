# ft_printf - 42 Project

**ft_printf** is a project in which we re-implement the C standard library function `printf`. This project helps build a deeper understanding of variadic functions, formatted output, and handling different data types, as well as providing more experience with memory management and algorithm design.

## Table of Contents

1. [About](#about)
2. [Project Structure](#project-structure)
3. [Supported Conversions and Flags](#supported-conversions-and-flags)
4. [How to Use](#how-to-use)
5. [Compilation](#compilation)
6. [Testing](#testing)
7. [License](#license)

## About

The **ft_printf** project involves recreating the well-known `printf` function in C. The goal is to mimic the behavior of `printf` by handling a variety of format specifiers, supporting various data types, and ensuring that the output is formatted correctly. This project helps in understanding the use of variadic arguments and the challenges of formatting output dynamically.

## Project Structure

- `ft_printf.h`: Header file containing all function prototypes and necessary includes.
- `*.c`: Source files that contain the implementation of the `ft_printf` function and its helper functions.
- `Makefile`: Compilation rules to build the library.

## Supported Conversions and Flags

### Conversion Specifiers

- `%c`: Prints a single character.
- `%s`: Prints a string (array of characters).
- `%p`: Prints a pointer address.
- `%d` / `%i`: Prints a decimal (integer) number.
- `%u`: Prints an unsigned decimal (integer) number.
- `%x`: Prints a number in hexadecimal (lowercase).
- `%X`: Prints a number in hexadecimal (uppercase).
- `%%`: Prints a literal percent sign.

## How to Use

1. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/username/ft_printf.git
    cd ft_printf
    ```

2. Run `make` to compile the library:

    ```bash
    make
    ```

3. Include `ft_printf.h` in your C programs, and link the compiled library when building your project:

    ```c
    #include "ft_printf.h"
    ```

4. Compile your project with `libftprintf.a`:

    ```bash
    gcc -Wall -Wextra -Werror -L. -lftprintf your_program.c -o your_program
    ```

## Compilation

- `make`: Compiles the `libftprintf.a` library.
- `make clean`: Deletes object files.
- `make fclean`: Deletes object files and the compiled library.
- `make re`: Cleans and recompiles the library.

## Testing

You can manually test `ft_printf` by writing a small program that calls the function with various format specifiers and compares its output with the standard `printf` function.

Alternatively, you can use third-party testers available online that automate the testing process for different format specifiers and edge cases.

## License

This project is open-source and free to use. You are welcome to modify and redistribute it as needed, while crediting the original author(s).
