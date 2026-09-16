
int 	ft_strcmp(char *s1, char *s2)
{
	int i;
	int s;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(int argc, char *argv[])
// {
// 	int n;

// 	if (argc == 3)
// 	{
// 		n = ft_strcmp(argv[1], argv[2]);
// 		printf("%d\n", n);
// 		printf("%d\n", strcmp(argv[1], argv[2]));
// 	}
// 	else
// 	{
// 		printf("this function takes two arguments.\n");
// 	}
// }