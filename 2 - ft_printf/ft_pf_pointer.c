#include "ft_printf.h"

void ft_pf_pointer(void *a, int *b)
{
    unsigned int    c;

    c = (unsigned int)a;
    ft_string("0x", b);
    ft_pf_unint(c, b);
}