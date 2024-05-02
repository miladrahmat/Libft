/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:33:33 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/02 17:24:35 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}
/* 
#include <stdio.h>
static void	ft_isalphax(unsigned int index, char *c)
{
	(void)index;
	if ((*c >= 'A' && *c <= 'Z')
		|| (*c >= 'a' && *c <= 'z'))
		printf("%c", *c);
}

int	main()
{
	char	*str = "hello world";

	ft_striteri(str, ft_isalphax);
	printf("\n");
	return (0);
} */