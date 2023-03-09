/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:31:53 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/23 19:34:47 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		d;
	char	e;
	char	*f;

	e = (char)c;
	f = (char *)s;
	d = 0;
	while (f[d] != e && s[d])
	{
		d++;
	}
	if (s[d] == e)
	{
		return (&f[d]);
	}
	return (NULL);
}
