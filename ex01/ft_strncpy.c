/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco.henriques <francisco.henriques@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 23:57:05 by francisco.henriq  #+#    #+#             */
/*   Updated: 2026/09/13 23:57:12 by francisco.henriq ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (!src[i])
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
		i++;
	}
	return (dest);
}

// #include <string.h>
// #include <unistd.h>
// int main(void)
// {
//     char *src = "howareyou";
//     char dest[] = "ameixa";
// 	unsigned int n = 4;
//     ft_strncpy(dest, src, n);
// 	int i = 0;

// 	while (i < n)
// 	{
// 		if (!dest[i])
// 		{
// 			write(1, "\\0", 2);
// 		}
// 		else
// 		{
// 			write(1, &dest[i], 1);
// 		}
// 		i++;
// 	}
// }
