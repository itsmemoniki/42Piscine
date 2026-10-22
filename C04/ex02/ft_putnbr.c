/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 16:18:46 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/24 12:49:34 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write (1, "-", 1);
	}
	if (nb < 10)
	{
		c = nb + '0';
		write (1, &c, 1);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

// #include <stdlib.h>
// int main(int argc, char *argv[])
// {
// 	int nb = (int)strtol(argv[1], NULL, 10);
// 	if (argc == 2)
// 	{
// 		ft_putnbr(nb);
// 	}
// 	return (0);
// }