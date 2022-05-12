/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:45:25 by ycanga            #+#    #+#             */
/*   Updated: 2022/02/16 16:45:25 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && n - 1 > i)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

// int main()
// {
//     char a[] = "ecole";
//     char b[] = "edole";
//     printf("%d\n", ft_memcmp(a, b, 3));
// }