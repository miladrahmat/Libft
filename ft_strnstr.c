/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:28:25 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/25 14:00:28 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	ni;
	unsigned int	hi;
	unsigned int	n_len;
	char			*ptr;

	n_len = ft_strlen((char *)needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	hi = 0;
	while (len >= n_len && haystack[hi] != '\0')
	{
		ni = 0;
		while (len >= n_len && needle[ni] == haystack[hi + ni])
		{
			if (needle[ni + 1] == '\0')
			{
				ptr = (char *)&haystack[hi];
				return (ptr);
			}
			ni++;
		}
		hi++;
		len--;
	}
	return (0);
}
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char	from[] = "What are you talking abouth?";
	char	find[] = "?";

	printf("My function: %s\n", ft_strnstr(from, find, 28));
	printf("OG function: %s\n", strnstr(from, find, 28));
	return (0);
} */