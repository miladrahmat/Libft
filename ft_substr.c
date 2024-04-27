/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:11:14 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/27 11:54:56 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	if (start > ft_strlen((char *)s))
		return (0);
	i = 0;
	res = (char *)malloc(len * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (i < len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
/* 
#include <stdio.h>
int	main()
{
	char str[] = "Huhuu";

	printf("Originally it was: %s\n", str);
	printf("Now it's: %s\n", ft_substr(str, 2, 3));
	free(str);
	return (0);
} */