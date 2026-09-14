int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
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
// 		n = ft_str_is_lowercase(argv[1]);
// 		printf("%d\n", n);
// 	}
// 	else
// 	{
// 		printf("this function takes an argument.");
// 	}
// }