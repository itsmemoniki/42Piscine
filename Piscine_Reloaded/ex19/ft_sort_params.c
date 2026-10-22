#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	strswap(char **s1, char **s2)
{
	int i;
	char *tmp;

	i = 0;
	while ((*s1)[i] && (*s1)[i] == (*s2)[i])
	{
		i++;
	}
	if ((*s1)[i] > (*s2)[i])
	{
		tmp = *s1;
		*s1 = *s2;
		*s2 = tmp;
	}
}

int	main(int argc, char *argv[])
{
	int args;

	args = 1;
	while (args < argc)
	{
		strswap(argv[args], argv[args + 1]);
		args++;
	}
}
