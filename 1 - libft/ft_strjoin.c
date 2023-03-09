/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 10:02:26 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/07 10:02:26 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		b;
	int		c;

	a = (char *)malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (a == 0 || s1 == 0 || s2 == 0)
	{
		return (NULL);
	}
	b = 0;
	c = 0;
	while (s1[b])
	{
		a[b] = s1[b];
		b++;
	}
	while (s2[c])
	{
		a[c + b] = s2[c];
		c++;
	}
	a[c + b] = '\0';
	return (a);
}
