/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:36:32 by adurusoy          #+#    #+#             */
/*   Updated: 2023/03/14 18:53:31 by adurusoy         ###   ########.fr       */
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
void	ft_pf_unint(long long a, int *b);
void	ft_pf_hex(unsigned long int a, int b, int *c);
void	ft_pf_pointer(void *a, int *b);
void	ft_pf_int(long long a, int *e);
int		ft_pf_intlen(long long a);
void	ft_bzero(void *s, size_t n);
int		ft_pow(int a);
#endif
