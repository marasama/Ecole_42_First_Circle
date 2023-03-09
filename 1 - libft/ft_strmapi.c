/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 10:03:13 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/07 10:03:13 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	a;
	char	*b;

	a = 0;
	if (s == 0 || f == 0)
	{
		return (0);
	}
	b = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (b == 0)
	{
		return (0);
	}
	while (a < ft_strlen(s))
	{
		b[a] = (*f)(a, s[a]);
		a++;
	}
	b[a] = '\0';
	return (b);
}
