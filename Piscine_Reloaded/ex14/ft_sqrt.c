int	ft_sqrt(int nb)
{
	long root;

	root = 1;
	if (nb <= 0)
		return (0);
	while (root * root < nb)
	{
		root++;
	}
	if (root * root == nb)
		return (root);
	return (0);
}
// #include <stdio.h>
// int main(void)
// {
// 	int nb = -1;
// 	printf("%d\n", ft_sqrt(nb));
// }