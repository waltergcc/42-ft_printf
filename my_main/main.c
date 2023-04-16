/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:24:18 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/16 11:34:33 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	main(void)
{
	char c = 'c';
	char s[] = "palavras";
	int	n = 23;
	int hex = 16;
	int or = 0;
	int ft = 0;
	
	or = printf("\nor_printf:\n\nchar: %c\nstring: %s\nnumber: %d\nhex low: %x\nhex up: %X\n", c, s, n, hex, hex);
	printf("Return: %d\n", or);
	ft = ft_printf("\nft_printf:\n\nchar: %c\nstring: %s\nnumber: %d\nhex low: %x\nhex up: %X\n", c, s, n, hex, hex);
	printf("Return: %d\n\n", ft);
}
