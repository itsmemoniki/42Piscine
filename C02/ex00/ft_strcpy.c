/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:11:44 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/14 12:30:14 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	if (argc == 3)
// 	{
// 	printf("%s\n", argv[1]);
// 	ft_strcpy(argv[1], argv[2]);
// 	printf("%s\n", argv[1]);
// 	}
// 	else
// 	{
// 		printf("This function takes two arguments.\n");
// 	}
// 	return (0) ;
// }
