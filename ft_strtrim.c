/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:08:14 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/22 13:20:38 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char *ft_strtrim(char const *s1, char const *set)
{
	unsigned int	set_i;
	unsigned int	s1_i;
	char			*res;

	s1_i = ft_strlen(s1);
	res = (char *)malloc(s1_len * sizeof(char));
	set_i = 0;
	s1_i = 0;
	while()
}