/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:30:45 by msouza-c          #+#    #+#             */
/*   Updated: 2026/09/15 14:27:40 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (!src[i])
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
		i++;
	}
	return (dest);
}

// #include <string.h>
// #include <stdlib.h>
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     if (argc == 4)
//     {

// 	    unsigned int n = (unsigned int)strtoul(argv[3], NULL, 10);
// 		char *dest = argv[1];
// 		char *src = argv[2];
// 		unsigned int i = 0;

// 		ft_strncpy(dest, src, n);
//         while (i < n)
//         {
//             if (!argv[1][i])
//             {
//                 printf("/0");
//             }
//             else
//             {
//                 printf("%c", argv[1][i]);
//             }
//             i++;
//         }
//     }
//     else
//     {
//         printf("This function takes three arguments\n");
//     }
// }
