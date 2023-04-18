/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:54:53 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/18 12:32:05 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_formats(va_list args, const char format);
int		ft_print_percent(void);
int		ft_print_chr(int c);
int		ft_print_str(char *s);
int		ft_print_nbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int n, const char format);
int		ft_print_address(unsigned long long n);
void	ft_put_hex(unsigned int n, const char format);
int		ft_nbrlen(unsigned int n, unsigned int base);
int		ft_address_len(unsigned long long n);
char	*ft_uitoa(unsigned int n);

#endif