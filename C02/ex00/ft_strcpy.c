/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco.henriques <francisco.henriques@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 22:30:02 by francisco.henriq  #+#    #+#             */
/*   Updated: 2026/09/10 23:54:51 by francisco.henriq ###   ########.fr       */
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
// int main(void)
// {
// 	char str1[] = "how are you?";
// 	char str2[30];
// 	char *resul = ft_strcpy(str2, str1);
// 	printf("%s\n", resul);
// 	strcpy(str2, str1);
// 	printf("%s\n", str2);

// 	return (0) ;
// }