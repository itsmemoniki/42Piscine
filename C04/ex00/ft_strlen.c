/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco.henriques <francisco.henriques@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 16:06:36 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/23 18:48:29 by francisco.henriq ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		printf("%d\n", ft_strlen(argv[1]));
// 	}
// }