/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:44:39 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/30 10:28:05 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	size;
	char			*res;

	i = 0;
	size = ft_strlen((char *)s);
	res = (char *)malloc(size * sizeof(char) + 1);
	if (res == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = (f)(i, (char *)s);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/* 
#include <stdio.h>
int	main()
{
	char	*str = "heLLo worLd";
	char	*res;

	res = ft_strmapi(str, ft_toupper);
	printf("Original string: %s\n", str);
	printf("New string %s\n", res);
	free(res);
	return (0);
} */