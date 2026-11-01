/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:40:25 by msouza-c          #+#    #+#             */
/*   Updated: 2026/10/30 17:40:27 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;

	d = dest;
	s = src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str1[] = "hi how are you";
// 	char str2[] = "hi how are you";
// 	memmove(str1 + 3, str1, 3);
// 	ft_memmove(str2 + 3, str2, 3);
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// }
