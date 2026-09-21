#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if (nb < 10)
	{
		c = nb + '0';
		write (1, &c, 1);
	}
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int nb = (int)strtol(argv[1], NULL, 10);
	if (argc == 2)
	{
		ft_putnbr(nb);
	}
	return (0);
}