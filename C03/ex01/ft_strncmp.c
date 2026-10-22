/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:38:02 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/21 15:23:39 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[])
// {
//     unsigned int n = (unsigned int)strtoul(argv[3], NULL, 10);
//     if (argc == 4)
//     {
//         printf("%d\n", ft_strncmp(argv[1], argv[2], n));
//     }
//     else
//     {
//         printf("this function takes three arguments");
//     }
// 	return (0);
// }