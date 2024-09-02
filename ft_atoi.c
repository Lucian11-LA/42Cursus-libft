#include "libft.h"
 
int ft_atoi(const char *str)
{
    int i;
    int sign;
    int nb;

    i = 0;

    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    sign = 1;

    if (str[i] == 43 || str[i] == 45)
    {
        if (str[i] == 45)
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
