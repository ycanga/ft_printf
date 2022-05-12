/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:15:46 by ycanga            #+#    #+#             */
/*   Updated: 2022/02/16 20:21:53 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n-- > 0)
		((unsigned char *)s)[n] = c;
	return (s);
}

// #include <stdio.h>
// int main()
// {
// 	char a[]="deneme";
// 	ft_memset(a,'a',3);
// 	printf("%s",a);
// }
