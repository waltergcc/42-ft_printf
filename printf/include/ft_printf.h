/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:54:53 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/16 01:56:40 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_print_percent(void);
int		ft_print_chr(int c);
int		ft_print_str(char *s);
int		ft_print_nbr(int n);
int		ft_print_hex(unsigned int n, const char format);
int		ft_formats(va_list args, const char format);
void	ft_put_hex(unsigned int n, const char format);
int		ft_hex_len(unsigned int n);

#endif