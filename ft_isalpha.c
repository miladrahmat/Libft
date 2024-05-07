/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:59:11 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/07 17:25:16 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c > 255)
		return (0);
	if (((unsigned char)c >= 65 && (unsigned char)c <= 90)
		|| ((unsigned char)c >= 97 && (unsigned char)c <= 122))
		return (1);
	else
		return (0);
}
/* 
#include <stdio.h>
int	main()
{
	int	test;

	test = 200;
	while (test < 400)
	{
		printf("test value: %d\n", test);
		printf("mine: %d\n", ft_isalpha(test));
		printf("original: %d\n\n\n", isalpha(test));
		test++;
	}
	return (0);
} */