/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:53:36 by ycanga            #+#    #+#             */
/*   Updated: 2022/03/01 20:20:34 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void f(unsigned  int x, char *str)
// {
//     x = 32;
//     printf("%c",*str-x);
// }

// int main()
// {
//     char *str= "ecole";
//     ft_striteri(str, f);
// }