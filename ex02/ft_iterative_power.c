#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
    int res = 1;

    if (power < 0)
        return (0);    
    while (power > 0)
    {
        res *= nb;
        power--;
    }
    return (res);
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
    int nb = 2;
    int pwr = 4;
    int res = ft_iterative_power(4, 4);;
    write(1, ft_putnbr(res), 1);
    write(1, "\n", 1);
}
