/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:41:02 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/07 10:27:14 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	d;

	d = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[d] && d < dstsize - 1)
	{
		dst[d] = src[d];
		d++;
	}
	dst[d] = 0;
	return (ft_strlen(src));
}
