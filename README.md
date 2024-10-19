![libft-dark](https://github.com/user-attachments/assets/6d092f7c-995b-43e3-ae39-6fb372bd08b9)

![C Programming](https://img.shields.io/badge/Language-C-blue)
![42School](https://img.shields.io/badge/42School-Project-blue)

## Description

**Libft** is a custom implementation of essential C standard library functions. This project is part of the 42 curriculum and aims to deepen understanding of fundamental concepts in the C programming language by re-implementing commonly used functions from `<string.h>`, `<ctype.h>`, and other libraries. It is the foundation for future projects at 42, where having a strong grasp of C basics is crucial.

## Project Objectives

- Implement a collection of essential C functions from scratch.
- Gain deeper understanding of memory manipulation, string operations, and algorithms.
- Develop skills to work with pointers and data structures.
- Build a solid foundation for future C projects in the 42 curriculum.

## Contribute and Recreate the Project

Would you like to recreate or contribute to this project? You're welcome to explore and build your own version of **Libft**! To get started, we highly encourage you to consult the detailed documentation available in the [`ReadmeFirst`](ReadmeFirst/) folder, where you'll find:

- Step-by-step guides
- Explanation of the functions and their implementation
- Tips and best practices for building the library

Feel free to open issues, suggest improvements, or fork the repository to create your own version. Your contributions and feedback are greatly appreciated!

## Functions Included

The following is a list of functions that are part of this library, categorized by their respective headers:

### String Manipulation

- `ft_strlen`: Calculates the length of a string.
- `ft_strchr`: Finds the first occurrence of a character in a string.
- `ft_strrchr`: Finds the last occurrence of a character in a string.
- `ft_strlcat`: Concatenates two strings, ensuring the result fits within a given size.
- `ft_strlcpy`: Copies a string to a destination with size limits.
- `ft_strncmp`: Compares two strings up to a specified number of characters.
- `ft_strdup`: Duplicates a string.
- `ft_strnstr`: Finds the first occurrence of a substring within a string.
- `ft_strjoin`: Concatenates two strings into a new one.
- `ft_strtrim`: Removes leading and trailing whitespace from a string.
- `ft_substr`: Extracts a substring from a string.
- `ft_split`: Splits a string into an array of substrings based on a delimiter.
- `ft_strmapi`: Applies a function to each character of a string.
- `ft_striteri`: Iterates through a string and applies a function to each character.

### Character Checking and Conversion

- `ft_isalpha`: Checks if a character is alphabetic.
- `ft_isdigit`: Checks if a character is a digit.
- `ft_isalnum`: Checks if a character is alphanumeric.
- `ft_isascii`: Checks if a character is in the ASCII table.
- `ft_isprint`: Checks if a character is printable.
- `ft_toupper`: Converts a lowercase character to uppercase.
- `ft_tolower`: Converts an uppercase character to lowercase.

### Memory Management

- `ft_memset`: Fills a block of memory with a specific value.
- `ft_bzero`: Sets all bytes of a memory area to zero.
- `ft_memcpy`: Copies a block of memory from one location to another.
- `ft_memmove`: Similar to `ft_memcpy`, but handles overlapping memory areas.
- `ft_memchr`: Searches for a specific byte in a block of memory.
- `ft_memcmp`: Compares two blocks of memory.

### Input/Output

- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Writes an integer as a string to a file descriptor.

### Conversion

- `ft_atoi`: Converts a string to an integer.
- `ft_itoa`: Converts an integer to a string.

### Other Utility Functions

- `ft_calloc`: Allocates memory for an array of elements and initializes all bytes to zero.

### Header and Makefile

- `libft.h`: Header file containing function prototypes and necessary includes.
- `Makefile`: Script to automate the compilation of the library.
