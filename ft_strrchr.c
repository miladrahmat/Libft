/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:24:27 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/19 10:26:04 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			ptr = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
	{
		ptr = (char *)&s[i];
		return (ptr);
	}
	else
		return (ptr);
}
/* 
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[] = "Hoooolooo ola";
	printf("My function:%s\n", ft_strrchr(str, 'o'));
	printf("OG function:%s\n", strrchr(str, 'o'));
	return (0);
} */