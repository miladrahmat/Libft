/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:08:14 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/23 12:31:11 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

static char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		else
			i++;
	}
	if (s[i] == (char)c)
	{
		ptr = (char *)&s[i];
		return (ptr);
	}
	else
		return (0);
}

static char	*ft_strdup(const char *s1)
{
	char			*s2;
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	s2 = (char *)malloc(i * sizeof(char));
	if (s2 == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}

static size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = ft_strlen((char *)src);
	if (dstsize < 1)
		return (src_size);
	while (0 < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return (src_size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*res;

	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[start]) != 0 && start <= end)
		start++;
	if (start >= end)
	{
		res = ft_strdup(s1);
		return (res);
	}
	while (ft_strchr(set, s1[end] != 0 && end >= 0))
		end--;
	res = (char *)malloc(end - start + 1);
	ft_strlcpy(res, &s1[start], end - start);
	return (res);
}

#include <stdio.h>
int	main()
{
	char	str[] = "What is that?? What";
	char	ex[] = "What";
	char	*after;

	printf("Before: %s\n", str);
	after = ft_strtrim(str, ex);
	printf("After: %s\n", after);
	free (after);
	return (0);
}