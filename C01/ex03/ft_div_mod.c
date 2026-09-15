/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 15:33:59 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/10 17:49:01 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 15;
// 	int b = 2;
// 	int div = 1;
// 	int mod = 1;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d %d %d %d", a, b, div, mod);
// }