/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:44:17 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/23 19:37:18 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*d;
	size_t	e;
	char	f;

	d = (char *)s;
	e = 0;
	f = (char)c;
	while (e < n)
	{
		if (d[e] == f)
		{
			return (d + e);
		}
		e++;
	}
	return (0);
}
