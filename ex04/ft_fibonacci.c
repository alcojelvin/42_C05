#include <unistd.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}

int ft_atoi(char *str)
{
    int signal = 1;
    int result = 0;

    while (*str == ' ' || *str >= 9 && *str <= 13)
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            signal = -signal;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * signal);
}

char    ft_putnb(int nb)
{
    char c;

    if (nb >= 10)
        ft_putnb(nb / 10);
    c = (nb % 10 + '0');
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "Usage: ./program <non-negative integer>\n", 40);
        return (1);
    }

    int nb = ft_atoi(argv[1]);
    int res = ft_fibonacci(nb);
    ft_putnb(res);
    write(1, "\n", 1);
}
