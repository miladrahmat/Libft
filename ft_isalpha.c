/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:59:11 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/19 10:24:49 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		|| ((unsigned char)c >= 'a' && (unsigned char)c <= 'z'))
		return (1);
	else
		return (0);
}
/* 
#include <stdio.h>
int	main()
{
	int	test;

	test = 'a';
	printf("%d\n", ft_isalpha(test));
	return (0);
} */