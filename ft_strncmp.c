/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:46:55 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/19 10:25:59 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n != 0 && s1[i] != '\0' && s2[i] != '\0')
	{
		if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
			i++;
		else
			return ((int)s1[i] - (int)s2[i]);
	}
	return ((int)s1[i] - (int)s2[i]);
}
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char	str1[] = "Hello";
	char	str2[] = "Helo";

	printf("My function: %d\n", ft_strncmp(str1, str2, 5));
	printf("OG function: %d\n", strncmp(str1, str2, 5));
	return (0);
} */