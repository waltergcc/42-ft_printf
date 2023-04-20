/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:43:50 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/20 01:01:18 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_zero_nbr(int n, t_flags *flags)
{
	char	*nbr;
	int		size;
	int		i;

	i = 0;
	if (n == 0)
		return (ft_print_chr('0', flags));
	if (n < 0)
	{
		i += ft_print_chr('-', flags);
		n = -n;
	}
	size = flags->width - ft_nbrlen(n, 10);
	while (i < size)
		i += ft_print_chr('0', flags);
	if (n == INT_MIN)
		i += ft_print_str("2147483648", flags);
	else
	{
		nbr = ft_itoa(n);
		i += ft_print_str(nbr, flags);
		free(nbr);
	}
	return (i);
}

int	ft_print_justify(t_flags *flags, int n)
{
	int	i;

	i = 0;
	if (flags->minus)
		flags->minus = 0;
	while (i < flags->width - n)
		i += ft_print_chr(' ', flags);
	return (i);
}

int	ft_print_zero(int n, t_flags *flags, int hex)
{
	int	size;
	int	i;

	i = 0;
	if (hex)
		size = flags->width - ft_nbrlen(n, 16);
	else
		size = flags->width - ft_nbrlen(n, 10);
	if (n == 0)
		return (0);
	while (i < size)
		i += ft_print_chr('0', flags);
	return (i);
}
