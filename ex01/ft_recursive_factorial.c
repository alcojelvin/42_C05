#include <unistd.h>

int ft_recursive_factorial(int nb)
{
    if (nb <= 1)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}

int ft_atoi(char *str)
{
    int sign = 1;
    int result = 0;

    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result *= 10 + (*str - '0');
        str++;
    }
    return (result * sign);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void put_nb(int nb)
{
    if (nb >= 10)
        put_nb(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "Usage: ./program <non-negative integer>\n", 40);
        return (1);
    }

    int n = ft_atoi(argv[1]);

    if (n < 0)
    {
        write(1, "Error: factorial of negative number is undefined.\n", 50);
        return (1);
    }

    int res = ft_recursive_factorial(n);
    put_nb(res);
    write(1, "\n", 1);
    return (0);
}
