#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = ft_strlen(dst);
	len = ft_strlen(dst) + ft_strlen(src);
	if (size)
	{
		while (i < (size - 1) && *src)
		{
			dst[i] = *src++;
			i++;
		}
		dst[i] = '\0';
	}
	else
		return (i);
	return (len);
}

#include <stdio.h>
//#include <bsd/string.h>
#include <string.h>
int main(void)
{
	char dest1[20] = "Hello ";
    char src1[] = "World!";
	char dest2[20] = "Hello ";
    char src2[] = "World!";

    printf("%zu dest: %s\n", ft_strlcat(dest1, src1, 20), dest1);
    printf("%zu dest: %s\n", strlcat(dest2, src2, 20), dest2);
}