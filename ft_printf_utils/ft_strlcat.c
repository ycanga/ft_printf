/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 20:16:24 by ycanga            #+#    #+#             */
/*   Updated: 2022/03/01 20:19:40 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dst);
	i = 0;
	if (len >= size)
		return (size + ft_strlen(src));
	while (src[i] != 0 && len < size - 1)
	{
		dst[len] = src[i];
		i++;
		len++;
	}
	dst[len] = 0;
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

// #include<stdio.h>
// int main()
// {
// 	char dest[]="ee";
// 	char src[]="ecole42";
// 	size_t i;

// 	i=5;
// 	printf("%zu",ft_strlcat(dest,src,i));
// }