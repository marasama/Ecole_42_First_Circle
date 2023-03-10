/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:36:32 by adurusoy          #+#    #+#             */
/*   Updated: 2023/01/26 13:36:32 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

# ifndef    FT_PRINT
# define    FT_PRINT

int     ft_printf(const char *a, ...);
void    ft_pf_putchar(char a, int *b);
void    ft_pf_string(char *a, int *c);
void    ft_pf_unint(unsigned int a, int *b);
void    ft_pf_int(int a, int *c);
int     ft_pf_intlen(long long a);
# endif