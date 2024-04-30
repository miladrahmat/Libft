/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:00:22 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/25 14:23:17 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	*ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len && ((unsigned char *)str)[i] != '\0')
	{
		((unsigned char *)str)[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * sizeof(size));
	if (ptr == NULL)
		return (NULL);
	else
	{
		ft_memset(ptr, 0, count);
		return (ptr);
	}
}

/* 
#include <stdio.h>
int	main()
{
	char	*str;
	char	from[] = "Hello World!";
	int		i;
	
	i = 0;
	while (from[i] != '\0')
		i++;
	str = (char *)ft_calloc(i, sizeof(char));
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