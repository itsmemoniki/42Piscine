/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco.henriques <francisco.henriques@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 16:12:58 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/23 18:48:42 by francisco.henriq ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}
// int main(int argc, char *argv[])
// {
//     if (argc == 2)
//     {
//         ft_putstr(argv[1]);
//     }
// }