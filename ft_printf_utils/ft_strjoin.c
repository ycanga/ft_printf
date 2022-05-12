/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:57:45 by ycanga            #+#    #+#             */
/*   Updated: 2022/03/02 20:57:47 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*len;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	len = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!len)
		return (0);
	ft_strlcpy(len, s1, s1_len + 1);
	ft_strlcpy(&len[s1_len], s2, s2_len + 1);
	return (len);
}

// #include <stdio.h>
// int main()
// {
//     char *a = "ecole";
//     char *b = "42";
//     printf("%s", ft_strjoin(a, b));
// }