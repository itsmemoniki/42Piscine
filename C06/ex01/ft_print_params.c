#include <unistd.h>

void	print(char *str)
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
int main(int argv, char *argc[])
{
	int	i;

    i = 1;
	if (argv > 0)
	{
		while (argc[i])
		{
			print(argc[i]);
			i++;
		}
	}
}