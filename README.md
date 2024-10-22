![libft-dark](https://github.com/user-attachments/assets/6d092f7c-995b-43e3-ae39-6fb372bd08b9)

![C Programming](https://img.shields.io/badge/Language-C-blue)
![42School](https://img.shields.io/badge/42School-Project-blue)

## ᴅᴇꜱᴄʀɪᴘᴛɪᴏɴ

**Libft** is a custom implementation of essential C standard library functions. This project is part of the 42 curriculum and aims to deepen understanding of fundamental concepts in the C programming language by re-implementing commonly used functions from `<string.h>`, `<ctype.h>`, and other libraries. It is the foundation for future projects at 42, where having a strong grasp of C basics is crucial.

## ᴘʀᴏᴊᴇᴄᴛ ᴏʙᴊᴇᴄᴛɪᴠᴇꜱ

- Implement a collection of essential C functions from scratch.
- Gain deeper understanding of memory manipulation, string operations, and algorithms.
- Develop skills to work with pointers and data structures.
- Build a solid foundation for future C projects in the 42 curriculum.

## ᴄᴏɴᴛʀɪʙᴜᴛᴇ ᴀɴᴅ ʀᴇᴄʀᴇᴀᴛᴇ ᴛʜᴇ ᴘʀᴏᴊᴇᴄᴛ

>[!IMPORTANT]
> [**ReadmeFirst**](ReadmeFirst) 


## ꜰᴜɴᴄᴛɪᴏɴꜱ ɪɴᴄʟᴜᴅᴇᴅ

The following is a list of functions that are part of this library, categorized by their respective headers:

### ꜱᴛʀɪɴɢ ᴍᴀɴɪᴘᴜʟᴀᴛɪᴏɴ

- [**STRLEN**](libft/ft_strlen.c) : Calculates the length of a string.
- [**STRCHR**](libft/ft_strchr.c) : Finds the first occurrence of a character in a string.
- [**STRRCHR**](libft/ft_strrchr.c) : Finds the last occurrence of a character in a string.
- [**STRLCAT**](libft/ft_strlcat.c) : Concatenates two strings, ensuring the result fits within a given size.
- [**STRLCPY**](libft/ft_strlcpy.c) : Copies a string to a destination with size limits.
- [**STRNCMP**](libft/ft_strncmp.c) : Compares two strings up to a specified number of characters.
- [**STRDUP**](libft/ft_strdup.c) : Duplicates a string.
- [**STRNSTR**](ft_strnstr.c) : Finds the first occurrence of a substring within a string.
- [**STRJOIN**](libft/ft_strjoin.c) : Concatenates two strings into a new one.
- [**STRTRIM**](libft/ft_strtrim.c) : Removes leading and trailing whitespace from a string.
- [**SUBSTR**](libft/ft_substr.c) : Extracts a substring from a string.
- [**SPLIT**](libft/ft_split.c) : Splits a string into an array of substrings based on a delimiter.
- [**STRMAPI**](libft/ft_strmapi.c): Applies a function to each character of a string.
- [**STRITERI**](libft/ft_striteri.c) : Iterates through a string and applies a function to each character.

### ᴄʜᴀʀᴀᴄᴛᴇʀ ᴄʜᴇᴄᴋɪɴɢ ᴀɴᴅ ᴄᴏɴᴠᴇʀꜱɪᴏɴ

- `ft_isalpha`: Checks if a character is alphabetic.
- `ft_isdigit`: Checks if a character is a digit.
- `ft_isalnum`: Checks if a character is alphanumeric.
- `ft_isascii`: Checks if a character is in the ASCII table.
- `ft_isprint`: Checks if a character is printable.
- `ft_toupper`: Converts a lowercase character to uppercase.
- `ft_tolower`: Converts an uppercase character to lowercase.

### ᴍᴇᴍᴏʀʏ ᴍᴀɴᴀɢᴇᴍᴇɴᴛ

- `ft_memset`: Fills a block of memory with a specific value.
- `ft_bzero`: Sets all bytes of a memory area to zero.
- `ft_memcpy`: Copies a block of memory from one location to another.
- `ft_memmove`: Similar to `ft_memcpy`, but handles overlapping memory areas.
- `ft_memchr`: Searches for a specific byte in a block of memory.
- `ft_memcmp`: Compares two blocks of memory.

### ɪɴᴘᴜᴛ/ᴏᴜᴛᴘᴜᴛ

- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Writes an integer as a string to a file descriptor.

### ᴄᴏɴᴠᴇʀꜱɪᴏɴ

- `ft_atoi`: Converts a string to an integer.
- `ft_itoa`: Converts an integer to a string.

### ᴏᴛʜᴇʀ ᴜᴛɪʟɪᴛʏ ꜰᴜɴᴄᴛɪᴏɴꜱ

- `ft_calloc`: Allocates memory for an array of elements and initializes all bytes to zero.

### 𝗛𝗲𝗮𝗱𝗲𝗿 𝗮𝗻𝗱 𝗠𝗮𝗸𝗲𝗳𝗶𝗹𝗲

- `libft.h`: Header file containing function prototypes and necessary includes.
- `Makefile`: Script to automate the compilation of the library.
