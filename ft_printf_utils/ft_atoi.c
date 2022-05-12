/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:43:24 by ycanga            #+#    #+#             */
/*   Updated: 2022/03/02 21:03:18 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			neg;
	long int	res;

	neg = 1;
	res = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		res = (res * 10) + (*str - 48);
		str++;
		if (res * neg > 2147483647)
			return (-1);
		if (res * neg < -2147483648)
			return (0);
	}	
	return (res * neg);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_atoi("!1231"));
//     printf("%d\n", ft_atoi("1"));
//     //printf("%d", atoi("!-1231"));
//     return (0);
// }
