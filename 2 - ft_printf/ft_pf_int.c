/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:42:17 by adurusoy          #+#    #+#             */
/*   Updated: 2023/03/12 14:01:28 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_int(int a, int *e)
{
	int		b;
	int		c;
	char	d;

	b = ft_pf_intlen(a);
	c = ft_pow(b);
	if (a == -2147483648)
	{
		ft_pf_string("-2", e);
		a = 147483648;
	}
	else if (a < 0)
	{
		c--;
		ft_pf_putchar('-', e);
		a = -a;
		b--;
	}
	while (--b >= 0)
	{
		d = ((a / c) % 10) + 48;
		c /= 10;
		ft_pf_putchar(d, e);
	}
}
