#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int nb;

    i = 0;

    while (str[i] == '' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
        i++;
    sign = 1;

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    nb = 0;
    while (ft_isdigit(str[i]))
    {
        nb = nb * 10 + str[i] - '0';
        i++;
    }

    return (nb * sign);
}