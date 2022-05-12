/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:53:54 by ycanga            #+#    #+#             */
/*   Updated: 2022/02/23 17:24:52 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (n * -1);
	}
	else
		nbr = n;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10 + '0'), fd);
}

// int main()
// {	
// 	ft_putstr_fd("Karakter--> ",1);
// 	ft_putnbr_fd('a',1);
// 	write(1,"\n",1);
// 	ft_putstr_fd("Sayı --> ",1);
// 	ft_putnbr_fd(-2,1);
// }