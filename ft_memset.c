/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:11:46 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/02 10:27:57 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)str)[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[20] = "hello you";

	printf("%s\n", ft_memset(str, 'A', 20));
	printf("%s\n", memset(str, 'A', 20));
	printf("%s\n", str);
	return (0);
} */
