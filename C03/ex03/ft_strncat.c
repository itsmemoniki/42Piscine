/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:35:37 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/21 15:51:21 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char dest[20] = "hello ";
// 	char src[] = "hi";
// 	printf("%s\n", ft_strncat(dest, src, 5));
// }