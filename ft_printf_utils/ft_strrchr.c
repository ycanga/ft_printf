/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:53:29 by ycanga            #+#    #+#             */
/*   Updated: 2022/03/01 18:56:52 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	while (size >= 0)
	{
		if (s[size] == (char)c)
			return ((char *)(s + size));
		size--;
	}
	return (0);
}	

// #include<stdio.h>
// int main()
// {
// 	char *s="ecole";
// 	char s2='c';

// 	printf("%s",ft_strrchr(s,s2));
// }