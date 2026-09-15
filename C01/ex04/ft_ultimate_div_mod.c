/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 12:28:57 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/10 17:09:16 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = (*a / *b);
	*b = (tmp % *b);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 55;
// 	int b = 5;
// 	int p1 = a/b;
// 	int p2 = a%b;
// 	printf ("%d, %d \n", p1, p2);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf ("%d, %d \n", a, b);
// }
