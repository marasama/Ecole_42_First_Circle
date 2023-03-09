/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 10:00:30 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/07 10:00:30 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	asdf(int a)
{
	int		b;
	int		c;

	b = 1;
	c = 0;
	while (c < a)
	{
		b *= 10;
		c++;
	}
	return (b);
}

int	fdsa(int a)
{
	int		b;

	b = 0;
	while (a / 10)
	{
		a /= 10;
		b++;
	}
	return (b + 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		a;
	char	b;
	int		c;

	a = 10;
	c = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2", fd);
		n = 147483648;
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	while (c < fdsa(n))
	{
		b = ((n / asdf(fdsa(n) - 1 - c)) % 10) + 48;
		write(fd, &b, 1);
		c++;
	}
}
