int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char *argv[])
// {
// 	int index = (int)strtol(argv[1], NULL, 10);
// 	if (argc == 2)
// 	{
// 		printf("%d\n", ft_fibonacci(index));
// 	}
// }