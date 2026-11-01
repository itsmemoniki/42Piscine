/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:07:22 by msouza-c          #+#    #+#             */
/*   Updated: 2026/10/30 17:40:57 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = (unsigned char)c;
		i++;
	}
	return (str);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     char s[] = "hello how are you";
//     memset(s, 'A', 2);
//     printf("%s\n", s);
// 	ft_memset(s, 'B', 2);
// 	printf("%s\n", s);
// }