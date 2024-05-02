/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:37:39 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/02 10:38:25 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return ;
	while (n != 0)
	{
		((unsigned char *)str)[i] = 0;
		i++;
		n--;
	}
}
/* #include <stdio.h>
int	main()
{
	char	str[] = "Hello World!";
	int	i;

	i = 0;
	ft_bzero(str, 20);
	while (str[i] == '\0')
		i++;
	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	return(0);
} */