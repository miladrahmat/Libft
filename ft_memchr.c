/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:29:19 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/19 10:25:16 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	while (n > 1 && ((unsigned char *)s)[i] != '\0')
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		else
		{
			i++;
			n--;
		}
	}
	if (((unsigned char *)s)[i] == (unsigned char)c)
	{
		ptr = (char *)&s[i];
		return (ptr);
	}
	else
		return (0);
}
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char	str[] = "Hello World!";

	printf("My function: %s\n", ft_memchr(str, 'l', 2));
	printf("OG function: %s\n", memchr(str, 'l', 2));
	return (0);
} */