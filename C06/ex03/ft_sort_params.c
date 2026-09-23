#include <unistd.h>

void	char_cmp(char **str1, char **str2)
{
	char *tmp;
	int i;

	i = 0;
	while ((*str1)[i] && (*str1)[i] == (*str2)[i])
		i++;
	if ((*str1)[i] > (*str2)[i])
	{
		tmp = *str1;
		*str1 = *str2;
		*str2 = tmp;
	}
}
void	print(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}
int	main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	if (argc > 0)
	{
		while (argv[i])
		{
			j = i + 1;
			while (argv[j])
			{
				char_cmp(&argv[i], &argv[j]);
				j++;
			}
			i++;
		}
	}
	i = 1;
	while (argv[i])
	{
		print(argv[i]);
		i++;
	}
}
