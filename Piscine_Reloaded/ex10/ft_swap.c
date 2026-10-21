void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include <stdio.h>
// int main(void)
// {
// 	int a = 15;
// 	int b = 20;
// 	printf("%d %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("%d %d\n", a, b);
// }