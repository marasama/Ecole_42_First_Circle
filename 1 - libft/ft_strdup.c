/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 10:01:53 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/07 10:01:53 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*b;
	int		c;

	b = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	c = 0;
	if (b == NULL)
	{
		return (NULL);
	}
	while (s1[c])
	{
		b[c] = s1[c];
		c++;
	}
	b[c] = '\0';
	return (b);
}
