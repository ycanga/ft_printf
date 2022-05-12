/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:45:35 by ycanga            #+#    #+#             */
/*   Updated: 2022/03/02 21:07:19 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (0);
	while (n > i)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int main() {
//     char a[10] = "";
//     char b[] = "ecole";

// 	printf("Öncesi--> %s\n", a);
//     ft_memcpy(a, b, 3);
//     printf("Sonrası--> %s\n", a);
// }

// #include <stdio.h>

// int main()
// {
// 	char str[99] = "helloworldandearth";

// 	ft_memcpy(str+2, str, 10);
// 	printf("%s\n", str);
// }