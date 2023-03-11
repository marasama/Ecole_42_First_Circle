/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:42:21 by adurusoy          #+#    #+#             */
/*   Updated: 2023/03/11 21:42:21 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_hex(long long a, int b, int *c)
{
	int		d;
	int		e;
	char	*f;

	d = 0;
	e = 7;
	f = malloc(sizeof(char) * 8 + 1);
	while (a != 0)
	{
		d = a % 16;
		f[e--] = (d < 10) ? (d + 48) : (d + 87);
		a /= 16;
	}
	e++;
	ft_bzero((void *)f, e);
	ft_pf_string(f + e, c);
	free(f);
}
