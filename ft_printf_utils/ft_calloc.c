/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:44:00 by ycanga            #+#    #+#             */
/*   Updated: 2022/03/01 20:22:05 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t x, size_t size)
{
	void	*str;
	size_t	total;

	total = size * x;
	str = malloc(total);
	if (!str)
		return (0);
	while (total != 0)
	{
		((unsigned char *)str)[total - 1] = 0;
		total--;
	}
	return (str);
}

// int main()
// {
//     int *a = ft_calloc(3, sizeof(int));
//     printf("%d", *a);
// }