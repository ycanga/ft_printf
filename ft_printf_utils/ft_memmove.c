/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:45:41 by ycanga            #+#    #+#             */
/*   Updated: 2022/02/17 01:21:36 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if (((unsigned long int)dest) - ((unsigned long int)src) < n)
	{
		i = n - 1;
		while (i >= 0 && i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// int main()
// {
//     char dst[] = "biugisayar";
//     char src[] = "bilgisayar1";

// 	printf("Öncesi--> %s\n", dst);
// 	ft_memmove(dst, src, 10);
//     printf("Sonrası--> %s\n", dst); 
// }

// int main()
// {
// 	char str[99] = "helloworldandearth";

// 	ft_memmove(str+2, str, 10);
// 	printf("%s\n", str);
// }