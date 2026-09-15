/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 11:43:51 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/15 11:47:15 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('0' <= str[i] && str[i] <= '9')
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
// 		n = ft_str_is_numeric(argv[1]);
// 		printf("%d\n", n);
// 	}
// 	else
// 	{
// 		printf("the function takes an argument");
// 	}
// }