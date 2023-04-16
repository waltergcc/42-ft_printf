/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_std.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:56:42 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/16 12:14:11 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

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

int	ft_print_nbr(int n)
{
	int		len;
	char	*nbr;

	len = 0;
	nbr = ft_itoa(n);
	len = ft_print_str(nbr);
	free(nbr);
	return (len);
}
