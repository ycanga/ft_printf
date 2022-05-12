/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:57:52 by ycanga            #+#    #+#             */
/*   Updated: 2022/03/02 20:57:53 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(s) + 1;
	s2 = (char *)malloc(sizeof(char) * i);
	if (!s || !s2)
		return (0);
	while (i > j)
	{
		((unsigned char *)s2)[j] = ((unsigned char *)s)[j];
		j++;
	}
	return (s2);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s",ft_strdup("ecole"));
// }