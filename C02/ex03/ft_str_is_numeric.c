int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('0' <= str[i] && str[i] <= '9')
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
// 		n = ft_str_is_numeric(argv[1]);
// 		printf("%d\n", n);
// 	}
// 	else
// 	{
// 		printf("the function takes an argument");
// 	}
// }