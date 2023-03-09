/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 09:54:07 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/24 04:51:25 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int a)
{
	int	b;

	b = 0;
	if (a == -2147483648)
		return (11);
	if (a < 0)
	{
		a = -a;
		b++;
	}
	while ((a / 10) != 0)
	{
		a /= 10;
		b++;
	}
	return (b + 1);
}

void	ft_inttostr(char *a, int b, int c, int n)
{
	if (n < 0)
	{
		b = 1;
		a[0] = '-';
		if (n == -2147483648)
		{
			a[c--] = '8';
			n = -214748364;
		}
		n = -n;
	}
	while (c >= b)
	{
		a[c] = (n % 10) + 48;
		n /= 10;
		c--;
	}
}

char	*ft_itoa(int n)
{
	char	*a;
	int		b;
	int		c;
	int		d;

	b = 0;
	c = ft_intlen(n);
	d = ft_intlen(n);
	a = (char *)malloc(sizeof(char) * (c + 1));
	if (a == 0)
		return (NULL);
	c--;
	ft_inttostr(a, b, c, n);
	a[d] = '\0';
	return (a);
}
