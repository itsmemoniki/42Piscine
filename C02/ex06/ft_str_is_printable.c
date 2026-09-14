int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (32 <= str[i] && str[i] <= 126)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int n;

// 	if (argc == 2)
// 	{
// 		n = ft_str_is_printable(argv[1]);
// 		printf("%d\n", n);
// 	}
// 	else
// 	{
// 		printf("this function takes an argument.");
// 	}
// }