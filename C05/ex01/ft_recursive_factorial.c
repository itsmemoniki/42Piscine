int ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return (0);
    }
    if (nb < 2)
    {
        return (1);
    }
    return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int main(void)
// {
//     int i = 0;
//     printf("%d\n", ft_recursive_factorial(i));
// }