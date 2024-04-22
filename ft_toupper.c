/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:50:09 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/19 10:27:49 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((unsigned char)c >= 97 && (unsigned char)c <= 122)
		return ((unsigned char)c - 32);
	else
		return ((unsigned char)c);
}
/* 
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("My function: %c\n", ft_toupper('v'));
	printf("OG function %c\n", toupper('v'));
} */