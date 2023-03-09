/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:43:26 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/23 23:57:44 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*str;

	a = 0;
	b = ft_strlen((char *)s);
	if (start >= b)
		len = 0;
	else if (b < len + start)
		len = b - start;
	str = (char *)malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (NULL);
	while (a < len && s[start + a])
	{
		str[a] = s[start + a];
		a++;
	}
	str[a] = '\0';
	return (str);
}
