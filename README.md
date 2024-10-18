# Libft - 42School

![C Programming](https://img.shields.io/badge/Language-C-blue)
![42School](https://img.shields.io/badge/42School-Project-blue)

## Description

**Libft** is a custom implementation of essential C standard library functions. This project is part of the 42School curriculum and aims to deepen understanding of fundamental concepts in the C programming language by re-implementing commonly used functions from `<string.h>`, `<ctype.h>`, and other libraries. It is the foundation for future projects at 42, where having a strong grasp of C basics is crucial.

## Project Objectives

- Implement a collection of essential C functions from scratch.
- Gain deeper understanding of memory manipulation, string operations, and algorithms.
- Develop skills to work with pointers and data structures.
- Build a solid foundation for future C projects in the 42School curriculum.

## Functions Included

The following is a list of functions that are part of this library, categorized by their respective headers:

### String Manipulation

- `ft_strlen`: Calculates the length of a string.
- `ft_strcpy`: Copies a string to another buffer.
- `ft_strcmp`: Compares two strings.
- `ft_strdup`: Duplicates a string.

### Memory Management

- `ft_memset`: Fills a block of memory with a specific value.
- `ft_bzero`: Sets all bytes of a memory area to zero.
- `ft_memcpy`: Copies a block of memory from one location to another.
- `ft_memmove`: Similar to `ft_memcpy`, but handles overlapping memory areas.

### Character Checking

- `ft_isalpha`: Checks if a character is alphabetic.
- `ft_isdigit`: Checks if a character is a digit.
- `ft_isalnum`: Checks if a character is alphanumeric.
- `ft_tolower`: Converts a character to lowercase.

## Project Structure

```bash
libft/
├── includes/
│   └── libft.h        # Header file with function prototypes
├── srcs/
│   ├── ft_strlen.c     # Source files with function implementations
│   ├── ft_memset.c     
│   ├── ...
├── Makefile           # Makefile to compile the library
└── README.md          # Project documentation
