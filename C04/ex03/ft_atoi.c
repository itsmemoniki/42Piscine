int	sinal(char *str)
{
	int	s;
	int i;

	s = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			s = s * -1;
		}
	}
	return (s);

}

int	ft_atoi(char *str)
{
	int i;
	while (str[i])

}

#include <stdio.h>
int main (int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
	}
}