/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:43:47 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/08 10:33:06 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_char(char *s, char c)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static size_t	word_len(char *s, char c)
{
	unsigned int	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
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

static char	**create_string(char *s, char c, char **array)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
		{
			len = word_len((char *)s, c);
			array[i] = ft_substr((char const *)s, 0, len);
			if (array[i] == NULL)
				return (free_array(array, i));
			i++;
		}
		while (*s != c && *s != '\0')
			s++;
	}
	array[i] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	size;
	char			**array;

	if (s == NULL)
		return (NULL);
	else
	{
		size = count_char((char *)s, c);
		array = (char **)malloc((size + 1) * sizeof(char *));
		if (array == NULL)
			return (NULL);
		array = create_string((char *)s, c, array);
		return (array);
	}
}
