/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:04:02 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/30 14:23:12 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c > 255)
		return (0);
	if ((unsigned char)c >= '0' && (unsigned char)c <= '9')
		return (1);
	else if (((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
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

	test = '=';
	printf("%d\n", ft_isalnum(test));
	return (0);
}
*/
