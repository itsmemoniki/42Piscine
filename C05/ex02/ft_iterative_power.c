/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:14:38 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/24 14:26:35 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	mul;

	i = 1;
	mul = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		nb = nb * mul;
		i++;
	}
	return (nb);
}

// #include <stdio.h>
// int main(void)
// {
//     int nb = 0;
//     int power = 1;
//     printf("%d\n", ft_iterative_power(nb, power));
// }