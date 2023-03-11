/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:42:17 by adurusoy          #+#    #+#             */
/*   Updated: 2023/03/11 21:42:17 by adurusoy         ###   ########.fr       */
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

void	ft_pf_int(int a, int *e)
{
	int		b;
	int		c;
	char	d;

	b = ft_pf_intlen(a);
	(a < 0) ? (c = ft_pow(b - 1)) : (c = ft_pow(b));
	if (a == -2147483648)
	{
		ft_string("-2", e);
		a = 147483648;
	}
	else if (a < 0)
	{
		ft_putchar('-', e);
		a = -a;
		b--;
	}
	while (--b >= 0)
	{
		d = ((a / c) % 10) + 48;
		c /= 10;
		ft_putchar(d, e);
	}
}
