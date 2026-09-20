char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;
	int size;

	i = 0;
	size = 0;
	while (dest[i])
	{
		size++;
		i++;
	}
	j = 0;
	while (i < size + nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return	(dest);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char dest[40] = "hello ";
// 	char src[] = "worldofwarcraft";
// 	printf("%s\n", ft_strncat(dest, src, 5));
// }