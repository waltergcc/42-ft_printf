/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:50:38 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/18 12:32:13 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	buffer;

	buffer = 0;
	if (format == 'c')
		buffer += ft_print_chr(va_arg(args, int));
	else if (format == 's')
		buffer += ft_print_str(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		buffer += ft_print_nbr(va_arg(args, int));
	else if (format == 'x' || format == 'X')
		buffer += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'u')
		buffer += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'p')
		buffer += ft_print_address(va_arg(args, unsigned long long));
	else if (format == '%')
		buffer += ft_print_percent();
	return (buffer);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		buffer;

	buffer = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			buffer += ft_formats(args, *str);
		}
		else
			buffer += ft_print_chr(*str);
		str++;
	}
	va_end(args);
	return (buffer);
}
