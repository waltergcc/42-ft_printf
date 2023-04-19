/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:54:53 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/20 00:22:53 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

# define EMPTY ""

typedef struct s_flags
{
	int	space;
	int	plus;
	int	hashtag;
	int	minus;
	int	zero;
	int	dot;
	int	width;
	int	precision;
	int	numbers;
}		t_flags;


int		ft_printf(const char *str, ...);
int		ft_formats(va_list args, const char *str, size_t *i);
int		ft_print_percent(void);
int		ft_print_chr(int c, t_flags *flags);
int		ft_print_str(char *s, t_flags *flags);
int		ft_print_nbr(int n, t_flags *flags);
int		ft_print_unsigned(unsigned int n, t_flags *flags);
int		ft_print_hex(unsigned int n, const char format, t_flags *flags);
int		ft_print_address(unsigned long long n, t_flags *flags);
void	ft_put_hex(unsigned int n, const char format);
int		ft_nbrlen(unsigned int n, unsigned int base);
int		ft_address_len(unsigned long long n);
char	*ft_uitoa(unsigned int n);
t_flags	*ft_check_flags(const char *str, size_t *i);
t_flags	*ft_flags_list(void);
int		ft_print_zero_nbr(int n, t_flags *flags);
int		ft_print_zero(int n, t_flags *flags, int hex);
int		ft_print_justify(t_flags *flags, int n);

#endif