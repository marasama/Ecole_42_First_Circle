/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:31:55 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/07 10:07:06 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*d;
	char	*e;
	size_t	f;

	d = (char *)dst;
	e = (char *)src;
	f = 0;
	if (!dst && !src)
		return (0);
	while (f < n)
	{
		d[f] = e[f];
		f++;
	}
	return (dst);
}
