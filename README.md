# LIBFT

***Libft is the very first individual project in the 42 cursus.***

In the project you implement some of the standard C library functions and some additional ones that you can use throughout the cursus.

## Function overview:


### Libc functions:


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
|**ft_strchr**|locates the first occurance of `c` in the string `s`|returns a pointer to the located character or NULL if the character does not appear in the string|
|**ft_strrchr**|locates the last occurance of `c` in the string `s`|returns a pointer to the located character or NULL if the character does not appear in the string|
|**ft_memchr**|locates the first occurance of `c`(converted to `unsigned char`) in the string `s`|returns a pointer to the located character or NULL if the character does not appear within `n` bytes|
|**ft_memcmp**|compares byte string `s1` against byte string `s2` (both strings are assumed to be `n` bytes long)|returns zero if the strings are identical, otherwise returns the difference between the first two differing bytes|
|**ft_strnstr**|locates the first occurance of the string `needle` in the string `haystack` (no more than `len` characters are searched)|if `needle` is an empty string, `haystack` is returned. If `needle` occurs nowhere in `haystack`, NULL is returned. Otherwise a pointer to the first character of the first occurance of `needle` is returned|
|**ft_atoi**|converts the initial portion of the string `str` to `int` representation||
|**ft_calloc**|contiguously allocates enough space for `count` objects that are `size` bytes of memory|returns a pointer to the allocated memory|
|**ft_strdup**|allocates sufficient memory for a copy of the string `s1` and does the copy|returns a pointer to the new string (can be used as an argument for `free`|


### Additional functions:

| Function name    | Description                                    | Return values                                                           |
|------------------|------------------------------------------------|-------------------------------------------------------------------------|
|**ft_substr**|allocates and returns a substring from the string `s`|returns the substing or NULL if the allocation fails|
|**ft_strjoin**|allocates and returns a new string, which is the result of the concatenation of `s1` and `s2`|reteurns the new string or NULL if the allocation fails|
|**ft_strtrim**|allocates and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string|returns the trimmed string or NULL if the allocation fails|
|**ft_split**|allocates and returns an array of strings obtained by splitting the string using the character `c` as a delimiter and NULL terminates the array|retrurns the array of new strings resulting from the split or NULL if the allocation fails|
|**ft_itoa**|allocates and returns a string representing the integer received as an argument|returns the string representing the integer or NULL if the allocation fails|
