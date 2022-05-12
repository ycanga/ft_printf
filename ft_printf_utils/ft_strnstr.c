/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:57:01 by ycanga            #+#    #+#             */
/*   Updated: 2022/03/01 18:58:19 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (*s2 == 0)
		return ((char *)s1);
	while (s1[i] != 0)
	{
		j = 0;
		while (s2[j] == s1[i + j] && s2[j] != 0 && n > (j + i))
		{
			if (s2[j + 1] == 0)
				return (((char *)s1) + i);
			j++;
		}
		i++;
	}
	return (0);
}

// #include<stdio.h>
// int main()
// {
//     printf("%s", ft_strnstr("ecole", "o", 5));
//     return (0);
// }