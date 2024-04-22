/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:43:04 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/22 12:10:28 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*s2;
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	s2 = (char *)malloc(i * sizeof(char));
	if (s2 == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
/* 
#include <stdio.h>
int	main()
{
	char org[] = "Hello World!";
	char *new;

	new = ft_strdup(org);
	printf("Original: %s\n", org);
	printf("New: %s\n", new);
	free(new);
	return (0);
} */