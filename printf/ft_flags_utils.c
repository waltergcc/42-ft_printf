/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:43:50 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/19 01:48:21 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		i += ft_print_chr('0');
	return (i);
}
