/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_std.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:56:42 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/19 01:48:47 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned int n, unsigned int base)
{
	int	count;

	count = 0;
	while (n)
	{
		count++;
		n /= base;
	}
	return (count);
}

int	ft_print_percent(void)
{
	ft_putchar('%');
	return (1);
}

int	ft_print_chr(int c)
{
	ft_putchar(c);
	return (1);
}

int	ft_print_str(char *s)
{
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstr(s);
	return (ft_strlen(s));
}

int	ft_print_nbr(int n, t_flags *flags)
{
	int		len;
	char	*nbr;

	len = 0;
	if (flags->space && n >= 0)
		len += ft_print_chr(' ');
	else if (flags->plus && n >= 0)
		len += ft_print_chr('+');
	else if (flags->zero)
	{
		if (n < 0)
		{
			len += ft_print_chr('-');
			n = -n;
			flags->width--;
		}
		len += ft_print_zero(n, flags, 0);
	}
	if (n == INT_MIN && flags->zero)
		len += ft_print_str("2147483648");
	else
	{
		nbr = ft_itoa(n);
		len += ft_print_str(nbr);
		free(nbr);
	}
	return (len);
}
