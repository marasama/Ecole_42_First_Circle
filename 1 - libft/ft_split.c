/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 10:01:06 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/07 10:01:06 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *a, char b)
{
	int		c;
	int		d;

	c = 0;
	d = 0;
	while (a[c])
	{
		if (a[c] == b && a[c + 1] != b && a[c + 1] != 0)
		{
			d++;
		}
		c++;
	}
	if (a[0] != b)
		d++;
	return (d);
}

int	ft_wordlen(char const *a, char b, int c)
{
	int		d;

	if (c != 0)
		c++;
	d = 0;
	while (a[c] != b && a[c])
	{
		d++;
		c++;
	}
	return (d);
}

char	*ft_word(char const *a, char b, int *c)
{
	char	*d;
	int		e;

	d = (char *)malloc(sizeof(char) * ft_wordlen(a, b, (*c)) + 1);
	e = 0;
	if (d == 0)
		return (NULL);
	while (a[*c] == b)
		(*c)++;
	while (a[*c] != b && a[*c])
	{
		d[e] = a[*c];
		e++;
		(*c)++;
	}
	d[e] = '\0';
	return (d);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	int		b;
	int		d;
	int		e;

	a = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (a == 0)
		return (NULL);
	b = 0;
	d = 0;
	e = 0;
	while (s[b])
	{
		if (((s[b] == c && s[b + 1] != c) && s[b + 1] != 0) || (s[0] != c
				&& e == 0))
		{
			a[d] = ft_word(s, c, &b);
			d++;
			e = 1;
		}
		else
			b++;
	}
	a[d] = 0;
	return (a);
}
