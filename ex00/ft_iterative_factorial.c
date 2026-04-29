int ft_iterative_factorial(unsigned int nb)
{
    int i;
    unsigned int res;

    i = 1;
    res = 1;
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    while (i <= nb)
    {
        res *= i;
        i++;
    }
    return (res);
}

#include <stdio.h>

int main(void)
{
    unsigned int factorial;

    factorial = ft_iterative_factorial(42);
    printf("%d\n", factorial);
}
