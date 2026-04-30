#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
    int res = 1;

    if (power < 0)
        return (0);    
    if (power == 0)
        return (1);
    return (nb * ft_recursive_power(nb, power - 1));
}

char    *ft_putnbr(int nb)
{
    char c;
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    c = nb % 10 + '0';
    write(1, &c, 1);
}

int main(void)
{
    int res = ft_recursive_power(4, 4);
    write(1, ft_putnbr(res), 1);
    write(1, "\n", 1);
}
