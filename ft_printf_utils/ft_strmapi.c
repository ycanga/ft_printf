/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:09:20 by ycanga            #+#    #+#             */
/*   Updated: 2022/03/01 19:30:29 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*a;

	i = 0;
	if (!s)
		return (0);
	a = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (a == 0)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}

// #include<stdio.h>
// char f(unsigned int a, char s)
// {
// 	a=32;	
// 	return(s-a);
// }
// int main()
// {
// 	printf("%s",ft_strmapi("ecole", f));
//     ;
// }