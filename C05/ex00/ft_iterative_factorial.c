int ft_iterative_factorial(int nb)
{
    int r;
    
    if (nb < 0)
    {
        return (0);
    }
    
    r = 1;
    while (nb > 0)
    {
        r *= nb;
        nb--;
    }
    return (r);
}

/*
#include <stdio.h>
int main(void)
{   int nb = 4;
    printf("%d\n", ft_iterative_factorial(nb));
}
*/