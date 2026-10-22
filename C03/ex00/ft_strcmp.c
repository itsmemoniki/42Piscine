/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:10:00 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/16 15:37:08 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
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
// #include <stdio.h>
// #include <string.h>
// int main(int argc, char *argv[])
// {
// 	int n;

// 	if (argc == 3)
// 	{
// 		n = ft_strcmp(argv[1], argv[2]);
// 		printf("%d\n", n);
// 		printf("%d\n", strcmp(argv[1], argv[2]));
// 	}
// 	else
// 	{
// 		printf("this function takes two arguments.\n");
// 	}
// }
