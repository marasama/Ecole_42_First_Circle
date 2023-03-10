#include "ft_printf.h"

void ft_pf_putchar(char a, int *b)
{
    write(1, &a, 1);
    b++;
}