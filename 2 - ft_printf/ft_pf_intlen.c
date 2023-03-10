#include "libft.h"

int    ft_pf_intlen(long long a)
{
    int    b;

    b = 0;
    if (a == -2147483648)
        return (11);
    if (a < 0)
    {
        a = -a;
        b++;
    }
    while ((a / 10) != 0)
    {
        a /= 10;
        b++;
    }
    return (b + 1);
}