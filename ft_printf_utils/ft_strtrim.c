/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycanga <ycanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:53:17 by ycanga            #+#    #+#             */
/*   Updated: 2022/03/02 21:10:59 by ycanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	set_start_index;
	size_t	set_end_index;

	if (!s1 || !set)
		return (NULL);
	set_start_index = 0;
	set_end_index = ft_strlen((char *) s1);
	while (ft_strchr(set, s1[set_start_index]) && s1[set_start_index] != '\0')
		set_start_index++;
	while (ft_strchr(set, s1[set_end_index]) && set_end_index != '\0')
		set_end_index--;
	if ((int)(set_end_index - set_start_index + 1) <= 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, set_start_index, \
	(set_end_index - set_start_index) + 1));
}

// #include<stdio.h>
// int main() {
//    printf("%s\n", ft_strtrim("   Ecole 42   ", " "));
// }
