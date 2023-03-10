#include "ft_printf.h"

int ft_pow(int a)
{
    int b;

    b = 1;
    while(--a > 0)
    {
        b *= 10;
    }
    return(b);
}

void ft_pf_unint(unsigned int a, int *b)
{
    char d;
    unsigned int e;

    if (a < 2147483648)
        ft_pf_int(a, b);
    else
    {
        d = a % 10;
        a /= 10;
        ft_pf_int(a, b);
        ft_pf_putchar(d, b);
    }
}