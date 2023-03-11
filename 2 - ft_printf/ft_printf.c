/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:40:41 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/26 13:40:41 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_checker(char a, va_list b, int *c)
{
	if (a == 'c')
		ft_pf_putchar(va_arg(b, char), c);
	else if (a == 's')
		ft_pf_string(va_arg(b, char *), c);
	else if (a == 'p')
		ft_pf_pointer(va_arg(b, void *), c);
	else if (a == 'd')
		ft_pf_int(va_arg(b, int), c);
	else if (a == 'i')
		ft_pf_int(va_arg(b, int), c);
	else if (a == 'u')
		ft_pf_unint(va_arg(b, unsigned int), c);
	else if (a == 'x')
		ft_lhexadecimal(a);
	else if (a == 'X')
		ft_uhexadecimal(a);
	else if (a == '%')
		ft_ft_putchar('%', c);
	else
		return (NULL);
}

int	ft_printf(const char *a, ...)
{
	int			count;
	va_list		zort;
	int			b;

	va_start(zort, a);
	b = 0;
	count = 0;
	while (a[count] != '\0')
	{
		if (a[count] == '%')
		{
			type_checker(a[++count], zort, &b);
			count++;
		}
		write (1, &a[count], 1);
		count++;
	}
	va_end(zort);
	return (count + b);
}
