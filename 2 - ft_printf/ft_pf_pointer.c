/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:42:02 by adurusoy          #+#    #+#             */
/*   Updated: 2023/03/12 03:01:17 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_pf_pointer(void *a, int *b)
{
    unsigned int    c;

    c = (unsigned int)a;
    ft_string("0x", b);
    ft_pf_hex(c, 1, b);
}