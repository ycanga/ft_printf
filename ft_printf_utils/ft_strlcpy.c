/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:57:38 by ycanga            #+#    #+#             */
/*   Updated: 2022/03/02 20:57:40 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	j;

	j = 0;
	srcsize = 0;
	if (!dstsize)
		return (ft_strlen(src));
	srcsize = ft_strlen(src);
	if (dstsize != 0)
	{
		while (j < dstsize - 1 && src[j])
		{
			((char *)dst)[j] = ((const char *)src)[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (srcsize);
}

// #include <stdio.h>
// int main()
// {
// 	char dest[]="";
// 	char src[]="ecole42";
// 	int size;

// 	size=2;
// 	printf("%zu",ft_strlcpy(dest,src,size));
// }