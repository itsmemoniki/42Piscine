/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:44:09 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/24 12:48:38 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	get_sign(char c, int *sign)
{
	if (c == '-')
	{
		*sign = *sign * -1;
	}
}

int	is_nbr(char c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		get_sign(str[i], &sign);
		i++;
	}
	while (is_nbr(str[i]))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (sign * nbr);
}

// #include <stdio.h>
// int main (int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		printf("%d\n", ft_atoi(argv[1]));
// 	}
// 	return (0);
// }
