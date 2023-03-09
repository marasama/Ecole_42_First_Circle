/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:11:15 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/07 10:06:25 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d;
	unsigned char	*e;
	unsigned int	f;

	d = (unsigned char *)s1;
	e = (unsigned char *)s2;
	f = 0;
	while (f < n)
	{
		if (d[f] != e[f])
		{
			return (d[f] - e[f]);
		}
		f++;
	}
	return (0);
}
