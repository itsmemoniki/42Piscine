int	ft_iterative_factorial(int nb)
{
	int factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb > 0)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
// #include <stdio.h>
// int main(void)
// {
// 	int nb = 0;
// 	printf("%d\n", ft_iterative_factorial(nb));
// }