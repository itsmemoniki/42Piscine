/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 11:49:08 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/15 12:30:21 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int n;

// 	if (argc == 2)
// 	{
// 		n = ft_str_is_lowercase(argv[1]);
// 		printf("%d\n", n);
// 	}
// 	else
// 	{
// 		printf("this function takes an argument.");
// 	}
// }