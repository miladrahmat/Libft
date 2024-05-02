/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:56:40 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/30 14:23:43 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 255)
		return (0);
	if ((unsigned char)c >= '0' && (unsigned char)c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main()
{
	int	test;

	test = '0';
	printf("%d\n", ft_isdigit(test));
	return (0);
}
*/
