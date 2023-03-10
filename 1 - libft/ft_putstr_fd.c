/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 10:00:52 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/07 10:00:52 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		a;

	if (s == NULL)
	{
		return ;
	}
	a = 0;
	while (s[a] != 0)
	{
		write(fd, &s[a++], 1);
	}
}