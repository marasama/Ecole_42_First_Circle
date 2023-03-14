/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:42:21 by adurusoy          #+#    #+#             */
/*   Updated: 2023/03/14 18:55:31 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_typer(char *a, int b, int d, int *e)
{
	if (d < 10)
		a[(*e)--] = d + 48;
	else
	{
		if (b == 1)
			a[(*e)--] = d + 87;
		else
			a[(*e)--] = d + 55;
	}
}

void	ft_pf_hex(unsigned long int a, int b, int *c)
{
	char			*f;
	int				d;
	int				e;
	int				g;

	e = 16;
	f = malloc(sizeof(char) * 16 + 1);
	g = 1;
	f[e--] = '\0';
	while (a != 0)
	{
		d = a % 16;
		ft_typer(f, b, d, &e);
		a /= 16;
		g = 2;
	}
	if (g == 1 && a == 0)
		ft_typer(f, b, 0, &e);
	ft_bzero((void *)f, ++e);
	ft_pf_string(f + e, c);
	free(f);
}
