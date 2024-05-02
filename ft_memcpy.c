/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:37:40 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/02 10:56:28 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (n > 0)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
		n--;
	}
	return (dst);
}
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char strs1[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
	char strs2[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
	//char strd[100] = "Hello you ;)";

	//printf("Before: %s ", strs);
	ft_memcpy((void *)&strs1[5], (void *)&strs1[3], 5);
	memcpy((void *)&strs2[5], (void *)&strs2[3], 5);
	//printf("source: %s ", strs);
	printf("After: %s\n", strs1);
	printf("After: %s\n", strs2);
	return (0);
} */