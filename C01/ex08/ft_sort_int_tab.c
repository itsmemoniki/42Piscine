/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 12:52:26 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/10 17:32:05 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int tab[] = {60, 4, 2, 77, 11, 3, 7};
// 	int size = 7;
// 	int i = 0;

// 	ft_sort_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}	
// }