/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:46:55 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/02 12:10:55 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > i && str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] == str2[i])
			i++;
		else
			return ((int)str1[i] - (int)str2[i]);
	}
	if (n > i && str1[i] != str2[i])
		return ((int)str1[i] - (int)str2[i]);
	return (0);
}
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char	str1[] = "\x12\xff\x65\x12\xbd\xde\xad";
	char	str2[] = "\x12\x02";

	printf("My function: %d\n", ft_strncmp(str1, str2, 5));
	printf("OG function: %d\n", strncmp(str1, str2, 5));
	return (0);
} */