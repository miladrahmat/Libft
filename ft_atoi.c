/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:00:16 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/04/22 17:19:22 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	ft_atoi(const char *str)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || ((str[i] >= 9 && str[i] <= 13)
			&& (str[i + 1] <= '0' || str[i + 1] >= '9')))
		i++;
	if (str[i++] == '-')
		sign *= -1;
	else
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
		if (res < 0 && sign == 1)
			return (-1);
		if (res < 0 && sign == -1)
			return (0);
	}
	return ((int)res * sign);
}
/* 
#include <stdio.h>
int main(void)
{
    char *s = "-21474836481111111111111111111111111111111111";
    char *str;

    int i = 2;
    while (i < 40)
    {
        str = malloc(i + 1);
        memcpy(str, s, i);
        str[i] = 0;
        printf("%s\n", str);
        printf("original: %i\n", atoi(str));
        printf("mine: %i\n\n", ft_atoi(str));
        free(str);
        i++;
    }
} */
/* 
#include <stdio.h>
int	main()
{
	char str[] = "-21474836482222222222222222222";

	printf("My function: %d\n", ft_atoi(str));
	printf("OG function: %d\n", atoi(str));
	return (0);
} */