char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		ft_strlowcase(argv[1]);
// 		printf("%s\n", argv[1]);
// 	}
// 	else
// 	{
// 		printf("this function takes an argument.\n");
// 	}
// }
