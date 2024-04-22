/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:22:35 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/19 10:25:32 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;

	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i--)
		{
			((char *)dst)[i] = ((char *)src)[i];
		}
	}
	return (dst);
}
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char strs[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
	//char	strs[] = "Hello World!";
	//char	strd[100];

	printf("Before: %s ", strs);
	memmove((char *)&strs[5], (char *)&strs[3], 5);
	printf("After: %s\n", strs);
	return (0);
} */