/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:42:21 by adurusoy          #+#    #+#             */
/*   Updated: 2023/03/12 03:01:20 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_pf_hex(long long a, int b, int *c)
{
    char    *f;
    int     d;
    int     e;

    d = 0;
    e = 8;
    f = malloc(sizeof(char) * 8 + 1);
    
    f[e--] = '\0'; 
    while (a != 0)
    {
        d = a % 16;
        if (d < 10)
            f[e--] = d + 48;
        else
        {
            if (b == 1)
                f[e--] = d + 87;
            else
                f[e--] = d + 55;
        }
        a /= 16;
    }
    e++;
    ft_bzero((void *)f, e);
    ft_pf_string(f + e, c);
    free(f);
}