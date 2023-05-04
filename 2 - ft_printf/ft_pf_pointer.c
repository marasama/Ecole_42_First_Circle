/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:42:02 by adurusoy          #+#    #+#             */
/*   Updated: 2023/05/04 21:56:33 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_pointer(void *a, int *b)
{
	unsigned long long int	c;

	c = (unsigned long long int)a;
	ft_pf_string("0x", b);
	ft_pf_hex(c, 1, b);
}
