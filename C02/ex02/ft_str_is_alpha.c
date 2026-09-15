/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 15:44:21 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/15 11:46:14 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((('A' <= str[i] && str[i] <= 'Z')
				|| ('a' <= str[i] && str[i] <= 'z')))
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
// 		n = ft_str_is_alpha(argv[1]);
// 		printf("%d\n", n);
// 	}
// 	else
// 	{
// 		printf("this function takes an argument");
// 	}
// }