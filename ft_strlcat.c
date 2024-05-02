/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:20:42 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/02 11:38:27 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	res;

	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen(dst);
	i = 0;
	res = 0;
	if (src_len == 0)
		return (dst_len);
	if (dstsize > dst_len)
		res = src_len + dst_len;
	else
		res = src_len + dstsize;
	while ((dst_len + 1) < dstsize && src[i] != '\0')
	{
		dst[dst_len] = ((char *)src)[i];
		i++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (res);
}
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char	src[] = " Hive!";
	char	dst[20] = "Hello";
	char	src1[] = " Hive!";
	char	dst1[20] = "Hello";

	printf("\nMy function:\nsource before: %s\n", src);
	printf("destination before: %s\n", dst);
	printf("return value: %lu\n", ft_strlcat(dst, src, 6));
	printf("destination after: %s\n\n", dst);
	printf("OG function:\nsource before: %s\n", src1);
	printf("destination before: %s\n", dst1);
	printf("return value: %lu\n", strlcat(dst1, src1, 6));
	printf("destination after: %s\n\n", dst1);
	return (0);
} */