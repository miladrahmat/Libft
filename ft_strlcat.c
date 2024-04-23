/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:20:42 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/23 10:47:49 by mrahmat-         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (src_len == 0)
		return (dst_len);
	while (i < (dstsize - dst_len - 1) && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char	src[] = "";
	char	dst[20] = "Hellooooooo";

	printf("source before: %s\n", src);
	printf("destination before: %s\n", dst);
	printf("return value: %lu\n", ft_strlcat(dst, src, 20));
	printf("destination after: %s\n", dst);
	return (0);
} */