/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2022/10/20 10:29:11 by adurusoy          #+#    #+#             */
/*   Updated: 2022/10/20 10:29:11 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned int	e;
	unsigned char	*f;

	f = (unsigned char *)src;
	d = (unsigned char *)dst;
	e = 0;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len--)
		{
			d[len] = f[len];
		}
	}
	else
	{
		while (e < len)
		{
			d[e] = f[e];
			e++;
		}
	}
	return (dst);
}
