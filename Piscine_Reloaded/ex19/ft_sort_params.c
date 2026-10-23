#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	strprint(char *s1)
{
	int i;

	i = 0;
	while (s1[i])
	{
		ft_putchar(s1[i]);
		i++;
	}
	ft_putchar('\n');
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
	int i;
    int j;

    i = 1;
    (void)argc;
	while (argv[i])
	{
        j = i + 1;
        while (argv[j])
        {
            strswap(&argv[i], &argv[j]);
            j++;
        }
        i++;
	}
    i = 1;
    while (argv[i])
    {
        strprint(argv[i]);
        i++;
    }
}
