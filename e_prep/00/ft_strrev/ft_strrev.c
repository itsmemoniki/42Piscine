
char    *ft_strrev(char *str)
{
	int i;
	int final;
	char tmp;

	final = 0;
	while (str[final])
	{
		final++;
	}

	i = 0;
	while (i < final)
	{
		tmp = str[i];
		str[i] = str[final];
		str[final] = tmp;
		i++;
		final--;
	}
	return (str);
}

#include <stdio.h>
int main(void)
{
	char str[] = "hello";
	ft_strrev(str);
	printf("%s\n", str);

}