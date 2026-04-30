#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 0;
    if (nb <= 0)
        return (0);
    while (i * i <= nb)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}

int ft_atoi(char *str)
{
    int sign = 1;
    int result = 0;

    while (*str == ' ' || *str >= 9 && *str <= 13)
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * sign);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "Usage: ./program <non-negative integer>\n", 40);
        return (1);
    }

    int nb = ft_atoi(argv[1]);
    int res = ft_sqrt(nb);
    printf("%d\n", res);
}
