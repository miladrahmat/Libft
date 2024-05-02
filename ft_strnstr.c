/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:28:25 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/02 15:55:36 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	ni;
	unsigned int	hi;

	if (needle[0] == '\0')
		return ((char *)haystack);
	hi = 0;
	while (len > hi && haystack[hi] != '\0')
	{
		ni = 0;
		while (len > (ni + hi) && needle[ni] == haystack[hi + ni])
		{
			if (needle[ni + 1] == '\0')
				return ((char *)&haystack[hi]);
			ni++;
		}
		hi++;
	}
	return (0);
}
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char	*from = NULL;
	char	find[] = "fake";

	printf("My function: %s\n", ft_strnstr(from, find, 3));
	printf("OG function: %s\n", strnstr(from, find, 3));
	return (0);
} */