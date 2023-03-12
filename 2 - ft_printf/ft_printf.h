/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:36:32 by adurusoy          #+#    #+#             */
/*   Updated: 2023/03/12 14:03:04 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *a, ...);
void	ft_pf_putchar(char a, int *b);
void	ft_pf_string(char *a, int *c);
void	ft_pf_unint(unsigned int a, int *b);
void	ft_pf_hex(long long a, int b, int *c);
void	ft_pf_pointer(void *a, int *b);
void	ft_pf_int(int a, int *c);
int		ft_pf_intlen(long long a);
void	ft_bzero(void *s, size_t n);
int		ft_pow(int a);
#endif
