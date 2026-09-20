unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return	(i + size);
}


#include <string.h>
#include <stdio.h>
int main(void)
{
	char pname[11] = "hello";
	char file[] = "hi"; 
	printf("%lu\n", strlcat(pname, file, 9));
	printf("%u\n", ft_strlcat(pname, file, 9));
	printf("%s\n", pname);
}