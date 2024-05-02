/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:23:41 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/02 12:59:56 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_i;
	unsigned int	s2_i;
	unsigned int	new_i;
	char			*new;

	s1_i = 0;
	s2_i = 0;
	new_i = 0;
	while (s1[s1_i] != '\0')
		s1_i++;
	while (s2[s2_i] != '\0')
		s2_i++;
	new = (char *)malloc((s1_i + s2_i) * sizeof(char) + 1);
	if (new == 0)
		return (0);
	s1_i = 0;
	s2_i = 0;
	while (s1[s1_i] != '\0')
		new[new_i++] = s1[s1_i++];
	while (s2[s2_i] != '\0')
		new[new_i++] = s2[s2_i++];
	new[new_i] = '\0';
	return (new);
}
/* 
#include <stdio.h>
int	main()
{
	char	str[] = "Hello";
	char	str2[] = " World!";
	char	*res;

	res = ft_strjoin(str, str2);
	printf("%s\n", res);
	free (res);
	return (0);
} */