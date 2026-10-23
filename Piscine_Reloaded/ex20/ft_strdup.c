#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = 0;
	while (src[len])
		len++;
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	dest = src;
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char	*s = "how are you??";
// 	printf("%li\n", sizeof(ft_strdup(s)));
// 	printf("%li\n", sizeof(strdup(s)));
// }