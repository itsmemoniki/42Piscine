/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:35:47 by msouza-c          #+#    #+#             */
/*   Updated: 2026/10/30 17:36:26 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char	str[] = "hello world";
// 	int i = 0;
// 	int n = 11;
// 	printf("%s\n", str);
// 	ft_bzero(str, 4);
// 	while (i < n)
// 	{
// 		printf("%c\n", str[i]);
// 		i++;
// 	}
// }
