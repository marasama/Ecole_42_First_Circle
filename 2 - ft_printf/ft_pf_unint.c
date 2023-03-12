/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_unint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:41:37 by adurusoy          #+#    #+#             */
/*   Updated: 2023/03/11 21:41:37 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pow(int a)
{
	int	b;

	b = 1;
	while (--a > 0)
	{
		b *= 10;
	}
	return (b);
}

void	ft_pf_unint(unsigned int a, int *b)
{
	char			d;
	unsigned int	e;

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
