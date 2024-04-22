/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:11:46 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/22 11:24:43 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len && ((unsigned char *)str)[i] != '\0')
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

	printf("%s\n", str);
	ft_memset(str, 'B', 20);
	printf("%s\n", str);
	return (0);
} */
