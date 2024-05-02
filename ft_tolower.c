/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:20:50 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/02 18:38:50 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 255)
		return (-1);
	if ((unsigned char)c >= 65 && (unsigned char)c <= 90)
		return (c + 32);
	else
		return (c);
}
/* 
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("My function: %c\n", ft_tolower('G'));
	printf("OG function: %c\n", tolower('G'));
	return (0);
} */