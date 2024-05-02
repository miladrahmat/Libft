/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:59:47 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/02 12:15:18 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (str1[i] == str2[i])
		{
			i++;
			n--;
		}
		else
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char	str1[] = "Hello";
	char	str2[] = "Hello";

	printf("My function: %d\n", ft_memcmp(str1, str2, 5));
	printf("OG function: %d\n", memcmp(str1, str2, 5));
	return (0);
} */