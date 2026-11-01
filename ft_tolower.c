int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
// 	printf("%c\n", tolower(';'));
// }