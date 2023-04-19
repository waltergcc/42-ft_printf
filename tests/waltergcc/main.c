/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:24:18 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/19 19:02:31 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char c = 'c';
	char s[] = "palavras";
	int	n = 23;
	void	*z = 0;
	int hex = 255;
	unsigned int u = 55;
	int or = 0;
	int ft = 0;
	
	or = printf("\nor_printf:\n\nchar: %c\nstring: %s\nnumber: %d\nhex low: %x\nhex up: %X\npercent: %%\nunsigned: %u\naddress: %p\naddress: %p\n", c, s, n, hex, hex, u, &c, z);
	printf("Return: %d\n", or);
	ft = ft_printf("\nft_printf:\n\nchar: %c\nstring: %s\nnumber: %d\nhex low: %x\nhex up: %X\npercent: %%\nunsigned: %u\naddress: %p\naddress: %p\n", c, s, n, hex, hex, u, &c, z);
	printf("Return: %d\n\n", ft);

	printf("Flags test:\n\n");
	printf("Space:\n");
	or = printf("Or:% d", 42);
	printf(" - Return: %d\n", or);
	ft = ft_printf("My:% d", 42);
	printf(" - Return: %d\n", ft);
	or = printf("Or:% d", -42);
	printf(" - Return: %d\n", or);
	ft = ft_printf("My:% d", -42);
	printf(" - Return: %d\n", ft);

	printf("\nPlus:\n");
	or = printf("Or:%+d", 42);
	printf(" - Return: %d\n", or);
	ft = ft_printf("My:%+d", 42);
	printf(" - Return: %d\n", ft);
	or = printf("Or:%+d", -42);
	printf(" - Return: %d\n", or);
	ft = ft_printf("My:%+d", -42);
	printf(" - Return: %d\n", ft);

	printf("\nHashtag:\n");
	or = printf("Or:%#x", 0);
	printf(" - Return: %d\n", or);
	ft = ft_printf("My:%#x", 0);
	printf(" - Return: %d\n", ft);
	or = printf("Or:%#X", 255);
	printf(" - Return: %d\n", or);
	ft = ft_printf("My:%#X", 255);
	printf(" - Return: %d\n", ft);

	// or = printf("Or: %0c - %0s - %0d - %0x - %0X - %0% - %0u - %0p\n", c, s, n, hex, hex, u, &c);
	printf("\nZero:\n");
	or = printf("Or: %01d - %05x - %05X - %05u", 0, hex, hex, u);
	printf(" - Return: %d\n", or);
	ft = ft_printf("My: %041d - %05x - %05X - %05u", 0, hex, hex, u);
	printf(" - Return: %d\n", ft);

	printf("\nminus:\n");
	or = printf("Or: %-10c - %-16s - %-15d - %-5x - %-5X - %-4p", c, s, 0, hex, hex, &c);
	printf(" - Return: %d\n", or);
	ft = ft_printf("My: %-10c - %-16s - %-15d - %-5x - %-5X - %-4p", c, s, 0, hex, hex, &c);
	printf(" - Return: %d\n", ft);
}
