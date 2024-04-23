/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:51:55 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/23 10:47:46 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
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
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char	src[] = "Hello";
	char	dst[10];

	printf("Source: %s\n", src);
	printf("Return value: %lu\n", strlcpy(dst, src, 5));
	printf("Destination: %s\n", dst);
	return (0);
} */