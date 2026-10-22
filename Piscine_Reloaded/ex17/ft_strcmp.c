int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char s1[] = "hell";
// 	char s2[] = "hello";

// 	printf("strcmp: %i\n ft: %i\n", strcmp(s1, s2), ft_strcmp(s1, s2));
// }