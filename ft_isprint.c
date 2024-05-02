/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:39:53 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/30 14:27:05 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 255)
		return (0);
	if ((unsigned char)c >= 32 && (unsigned char)c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main()
{
	int	test;

	test = 31;
	printf("%d\n", ft_isprint(test));
	return (0);
}
*/
