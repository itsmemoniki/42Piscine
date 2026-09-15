/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 12:41:02 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/10 17:25:18 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

// #include <stdio.h>
// int main(void)
// {
//     int tab[] = {4, 5, 2, 3, 7, 8};
// 	int size = 6;
//     int i = 0;

// 	ft_rev_int_tab(tab, size);

// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;

// 	}
// 	printf("\n");
// }
