/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:37:47 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/21 15:55:34 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	if (argc == 3)
// 	{
// 		printf("%s\n", ft_strstr(argv[1], argv[2]));
// 	}
// }