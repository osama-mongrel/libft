*This project has been created as part of the 42 curriculum by oben_el*

# Libft

This project aim is to code some general purpose C functions (see below), which are then compiled into a library to use in future projects.

## Description

### Functions from `<ctype.h>` library

* [`ft_isalpha`](ft_isalpha.c) - alphabetic character test.
* [`ft_isdigit`](ft_isdigit.c) - decimal-digit character test.
* [`ft_isalnum`](ft_isalnum.c) - alphanumeric character test.
* [`ft_isascii`](ft_isascii.c) - test for ASCII character.
* [`ft_isprint`](ft_isprint.c) - printing character test.
* [`ft_toupper`](ft_toupper.c) - lower case to upper case letter conversion.
* [`ft_tolower`](ft_tolower.c) - upper case to lower case letter conversion.

### Functions from `<string.h>` library

* [`ft_strlen`](ft_strlen.c) - find length of string.
* [`ft_memset`](ft_memset.c) - writ  e a byte to a byte string.
* [`ft_bzero`](ft_bzero.c) - write zeroes to a byte string.
* [`ft_memcpy`](ft_memcpy.c) - copy memory area.
* [`ft_memmove`](ft_memmove.c) - copy memory area.
* [`ft_strlcpy`](ft_strlcpy.c) - NULL-terminated size-bounded string copying.
* [`ft_strlcat`](ft_strlcat.c) - NULL-terminated size-bounded string concatenation.
* [`ft_strchr`](ft_strchr.c) - locate character first occurrence in string.
* [`ft_strrchr`](ft_strrchr.c) - locate character last occurrence in string.
* [`ft_strncmp`](ft_strncmp.c) - size-bounded strings comparison.
* [`ft_memchr`](ft_memchr.c) - locate byte in byte string.
* [`ft_memcmp`](ft_memcmp.c) - byte strings comparison.
* [`ft_strnstr`](ft_strnstr.c) - locate a substring in a string (size-bounded).
* [`ft_strdup`](ft_strdup.c) - duplicates string by allocating new memory for it.

### Functions from `<stdlib.h>` library

* [`ft_calloc`](ft_calloc.c) - memory allocation.
* [`ft_atoi`](ft_atoi.c) - convert ASCII string to integer.

### Non-standard functions

* [`ft_substr`](ft_substr.c`) - extract substring from string.
* [`ft_strjoin`](ft_strjoin.c) - concatenate two strings into a new allocated string.
* [`ft_strtrim`](ft_strtrim.c) - trim beginning and end of string from specified characters.
* [`ft_split`](ft_split.c) - split string, with specified character as delimiter, into an array of strings.
* [`ft_itoa`](ft_itoa.c) - converting integer to ASCII string.
* [`ft_strmapi`](ft_strmapi.c) - create new string from modifying string with specified function.
* [`ft_striteri`](ft_striteri.c) - modify string with specified function.
* [`ft_putchar_fd`](ft_putchar_fd.c) - output a character to given file.
* [`ft_putstr_fd`](ft_putstr_fd.c) - output string to given file.
* [`ft_putendl_fd`](ft_putendl_fd.c) - output string to given file with newline.
* [`ft_putnbr_fd`](ft_putnbr_fd,c`) - output integer to given file.

### Linked list functions

* [`ft_lstnew`](ft_lstnew.c) - create new list.
* [`ft_lstadd_front`](ft_lstadd_front.c) - add new element at beginning of list.
* [`ft_lstsize`](ft_lstsize.c) - count elements of a list.
* [`ft_lstlast`](ft_lstlast.c) - find last element of list.
* [`ft_lstadd_back`](ft_lstadd_back.c) - add new element at end of list.
* [`ft_lstdelone`](ft_lstdelone.c) - delete element from list.
* [`ft_lstclear`](ft_lstclear.c) - delete sequence of elements of list from a starting point.
* [`ft_lstiter`](ft_lstiter.c) - apply function of content of all list's elements.
* [`ft_lstmap`](ft_lstmap.c) - apply function to content of all list's elements into new list.

## Instructions

To use this library first you need to clone this repo:

    git clone https://github.com/osama-mongrel/libft.git

Then compile it:

    make

To remove object files run:

    make clean

To remove all compiled files run:

    make fclean

To run all the previous commands in a single one run:

    make re

Finally to use this library in your project, make sure to include its header file:

    #include "libft.h"

And when compiling your project to add the necessary flags:

    -Ipath/to/libft -Lpath/to/libft -lft

## Resources

For more information about the functions implemented in this project refer to their corresponding man pages if they have one.

AI wasn't used in this projects.
