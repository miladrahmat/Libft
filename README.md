# LIBFT

***The very first individual project in the 42 cursus.***

## Content

- [Introduction](#introduction)
- [Function overview](#function-overview)
  - [Libc functions](#libc-functions)
  - [Additional functions](#additional-functions)  
- [Bonus](#bonus)
  - [Bonus functions](#bonus-functions)

## Introduction

In this project I created my own library that I can use throughout the 42 cursus. I re-created some of `libc` functions and created some additional useful functions.

The purpose of the project is to understand the way these functions work, to implement and learn how to use them.

## Function overview

I redid a set of functions from `libc`, the functions have the same prototypes and implement the same behaviors as the originals. The only difference is their names. They begin with the *ft_* prefix. For instance, **strlen** is **ft_strlen**.

### Libc functions


| Function name    | Description                                    | Return values                                                           |
|------------------|------------------------------------------------|-------------------------------------------------------------------------|
|**ft_isalpha**|tests for any alphabetical characters: `a` to `z` and `A` to `Z`| returns zero if character tests false and non-zero if character tests true|
|**ft_isdigit**|tests for a decimal digit character: `1`, `2`, `3`, `4`, `5`,  `6`, `7`, `8` and `9`| retruns zero if the character tests false and non-zero if the character tests true|
|**ft_isalnum**|tests for any character for which **ft_isalpha** or **ft_isdigit** is true|returns zero if the character tests false and non-zero if the character tests true|
|**ft_isascii**|tests for an ASCII character|returns zero if the character tests false and non-zero if the character tests true|
|**ft_isprint**|tests for any printable character in the ASCII table (including `space`)|returns zero if the character tests false and non-zero if the character tests true|
|**ft_strlen**|computes the length of the given string|returns the number of characters that precede the terminating NULL character `\0`|
|**ft_memset**|writes `len` bytes of value `c` to the string `str`|returns the string `str`|
|**ft_bzero**|writes n zeroed bytes to the string `str`||
|**ft_memcpy**|copies `n` bytes from memory area `src` to `dst`|returns the original value of `dst`|
|**ft_memmove**|copies `len` bytes of value from string `src` to string `dst` (safer alternative to **ft_memcpy** if the two strings overlap)|returns the original value of `dst`|
|**ft_strlcpy**|copies up to `dstsize - 1` characters from the string `src` to the string `dst` and NULL-terminating the result|returns the total length of the string it tried to create (length of `src`)|
|**ft_strlcat**|appends the string `src` to the end of the string `dst` (at most `dstsize - ft_strlen(dst) - 1` characters) and NULL-terminate the result|returns the total length of the string it tried to create|
|**ft_toupper**|converts a lowercase letter to the corresponding uppercase letter|if the argument is a lowercase letter, the function returns the corresponding uppercase letter if there is one. Otherwise the function returns the argument unchanged|
|**ft_tolower**|converts a uppercase letter to the corresponding lowercase letter|if the arfument is a uppercase letter, the function returns the corresponding lowercase letter if there is one. Otherwise the function returns the argument unchanged|
|**ft_strchr**|locates the first occurance of `c` in the string `s`|returns a pointer to the located character or **NULL** if the character does not appear in the string|
|**ft_strrchr**|locates the last occurance of `c` in the string `s`|returns a pointer to the located character or **NULL** if the character does not appear in the string|
|**ft_memchr**|locates the first occurance of `c`(converted to `unsigned char`) in the string `s`|returns a pointer to the located character or **NULL** if the character does not appear within `n` bytes|
|**ft_memcmp**|compares byte string `s1` against byte string `s2` (both strings are assumed to be `n` bytes long)|returns zero if the strings are identical, otherwise returns the difference between the first two differing bytes|
|**ft_strnstr**|locates the first occurance of the string `needle` in the string `haystack` (no more than `len` characters are searched)|if `needle` is an empty string, `haystack` is returned. If `needle` occurs nowhere in `haystack`, **NULL** is returned. Otherwise a pointer to the first character of the first occurance of `needle` is returned|
|**ft_atoi**|converts the initial portion of the string `str` to `int` representation||
|**ft_calloc**|contiguously allocates enough space for `count` objects that are `size` bytes of memory|returns a pointer to the allocated memory|
|**ft_strdup**|allocates sufficient memory for a copy of the string `s1` and does the copy|returns a pointer to the new string (can be used as an argument for `free`|


### Additional functions

| Function name    | Description                                    | Return values                                                           |
|------------------|------------------------------------------------|-------------------------------------------------------------------------|
|**ft_substr**|allocates and returns a substring from the string `s`|returns the substing or **NULL** if the allocation fails|
|**ft_strjoin**|allocates and returns a new string, which is the result of the concatenation of `s1` and `s2`|reteurns the new string or **NULL** if the allocation fails|
|**ft_strtrim**|allocates and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string|returns the trimmed string or **NULL** if the allocation fails|
|**ft_split**|allocates and returns an array of strings obtained by splitting the string using the character `c` as a delimiter and **NULL** terminates the array|retrurns the array of new strings resulting from the split or **NULL** if the allocation fails|
|**ft_itoa**|allocates and returns a string representing the integer received as an argument|returns the string representing the integer or **NULL** if the allocation fails|
|**ft_strmapi**|applies the function `f` to each character of the string `s`, and passing its first index as argument to allocate and create a new string resulting from the successive applications of `f`|returns the string crated from the successive applications of `f` or **NULL** if the allocation fails|
|**ft_striteri**|applies the function `f` on each character of the string passed as argument, passing its index as first argument||
|**ft_putchar_fd**|outputs the character `c` to the given file descriptor||
|**ft_putstr_fd**|outputs the string `s` to the given file descriptor||
|**ft_putendl_fd**|outputs the string `s` to the given file descriptor followed by a newline||
|**ft_putnbr_fd**|outputs the integer `n` to the given file descriptor||

## Bonus

The bonus part is for learning to use structs and lists. For this I had to create the following struct in my `libft.h` file:
```
typedef struct s_list
{
   void *content;
   struct s_list *next;
}  t_list;
```
The members of the `t_list` struct are:

- content: The data contained in the node.
 `void *` allows to store any kind of data.

 - next: The address of the next node or **NULL** if the next node is the last one.

### Bonus functions

| Function name    | Description                                    | Return values                                                           |
|------------------|------------------------------------------------|-------------------------------------------------------------------------
|**ft_lstnew**|allocates and returns a new node. The member variable `content` is initialized with the value of the parameter `content`. The variable `next` is initialized to NULL|returns the new node|
|**ft_lstadd_front**|adds the node `new` at the beginning of the list||
|**ft_lstsize**|counts the number of nodes in a list|returns the length of the list|
|**ft_lstlast**|returns the last node of the list|returns the last node of the list|
|**ft_lstadd_back**|adds the node `new` at the end of the list||
|**ft_lstdelone**|takes as a parameter a node and frees the memory of the node's content using the function `del` given as a parameter and free the node||
|**ft_lstclear**|deletes and frees the given node and every successor of that node, using the function `del` and `free`||
|**ft_lstiter**|iterates the list `lst` and appllies the function `f` on the content of each node||
|**ft_lstmap**|iterates the list `lst` and applies the function `f` on the content of each node. Creates a new list resulting of the successive applications of the function `f`|returns the new list or **NULL** if the allocation fails|
