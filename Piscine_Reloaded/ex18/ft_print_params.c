#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int params;
	int letters;

	params = 1;
	while (params < argc)
	{
		letters = 0;
		while (argv[params][letters])
		{
			ft_putchar(argv[params][letters]);
			letters++;
		}
		ft_putchar('\n');
		params++;
	}
}