/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:33:33 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/30 11:18:13 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	loc;
	unsigned int	index;

	loc = 0;
	index = 0;
	while (s[loc] != '\0')
	{
		(f)(index, &s[loc]);
		loc++;
	}
}
/* 
#include <stdio.h>
static void	ft_isalphax(unsigned int index, char *c)
{
	if ((c[index] >= 'A' && c[index] <= 'Z')
		|| (c[index] >= 'a' && c[index] <= 'z'))
		printf("%c", c[index]);
}

int	main()
{
	char	*str = "hello world";

	ft_striteri(str, ft_isalphax);
	printf("\n");
	return (0);
} */