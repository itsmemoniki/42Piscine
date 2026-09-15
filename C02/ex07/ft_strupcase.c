/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 12:25:10 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/15 12:32:03 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		ft_strupcase(argv[1]);
// 		printf("%s\n", argv[1]);
// 	}
// 	else
// 	{
// 		printf("this function takes an argument.\n");
// 	}
// }
