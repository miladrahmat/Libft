/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:43:47 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/29 09:22:24 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_char(char *s, char c)
{
	unsigned int	count;
	unsigned int	i;

	i = 0;
	count = 1;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] == c)
			i++;
		if (s[i] == c && s[i + 1] != c)
		{
			count++;
			i++;
		}
		else
			i++;
	}
	if (s[i - 1] == c)
		count--;
	return (count);
}

static size_t	word_len(char *s, char c)
{
	unsigned int	res;

	res = 0;
	while (s[res] != c && s[res] != '\0')
		res++;
	return (res);
}

static char	**free_array(char **array, size_t index)
{
	while (index)
	{
		free(array[index]);
		index--;
	}
	free(array[index]);
	free(array);
	return (0);
}

char	**create_string(char *s, char c, char **array)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
		{
			count = word_len((char *)s, c);
			array[i] = ft_substr((char const *)s, 0, count);
			if (array[i] == NULL)
				return (free_array(array, i));
			i++;
		}
		while (*s != c && *s != '\0')
			s++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	size;
	char			**res;

	if (s == NULL || *s == '\0')
	{
		res = NULL;
		return (res);
	}
	else
	{
		size = count_char((char *)s, c);
		res = (char **)malloc(size * sizeof(char *) + 1);
		if (res == NULL)
			return (NULL);
		res = create_string((char *)s, c, res);
		return (res);
	}
}
/* 
#include <stdio.h>
int	main()
{
	char			*str = "    HELLO  What    Are You Doing??       ";
	char			sep = ' ';
	char			**res;
	unsigned int	index;

	index = 0;
	res = ft_split(str, sep);
	if (res == NULL)
		return (0);
	while (res[index] != NULL)
	{
		printf("%s\n", res[index]);
		index++;
	}
	free_array(res, index);
	return (0);
} */