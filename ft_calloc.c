/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:00:22 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/02 16:38:18 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	else
	{
		ft_memset(ptr, 0, count * size);
		return (ptr);
	}
}
/* 
#include <stdio.h>
int	main()
{
	char	*str;
	char	from[] = "";
	int		i;
	int		size;
	
	size = 0;
	while (from[size] != '\0')
		size++;
	str = (char *)ft_calloc(size, sizeof(char));
	i = 0;
	while (from[i] != '\0')
	{
		str[i] = from[i];
		i++;
	}
	printf("%s\n", str);
	free (str);
	return (0);
} */