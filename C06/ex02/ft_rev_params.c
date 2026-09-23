#include <unistd.h>

void    print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int main(int argc, char *argv[])
{
    while (0 < argc - 1)
    {
		print(argv[argc - 1]);
		argc--;
    }
}