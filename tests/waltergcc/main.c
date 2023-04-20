/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:24:18 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/20 04:44:47 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char c = 'c';
	char s[] = "palavras";
	char *t = "";
	int	n = 23;
	void	*z = 0;
	int hex = 255;
	unsigned int u = 55;
	int or = 0;
	int ft = 0;
	
	printf("Mandatory test:\n\n");

	or = printf("Or: %c - %s - %d - %x - %X - %% - %u - %p - %p - ", c, s, n, hex, hex, u, &c, z);
	printf("Return: %d\n", or);
	ft = ft_printf("My: %c - %s - %d - %x - %X - %% - %u - %p - %p - ", c, s, n, hex, hex, u, &c, z);
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

	printf("\nZero:\n");
	or = printf("Or: %01d - %05x - %05X - %05u", 0, hex, hex, u);
	printf(" - Return: %d\n", or);
	ft = ft_printf("My: %041d - %05x - %05X - %05u", 0, hex, hex, u);
	printf(" - Return: %d\n", ft);

	printf("\nminus:\n");
	or = printf("Or: %-10c - %-10s - %-10d - %-10x - %-10X - %-20p - %-10u", c, s, 0, hex, hex, &n, u);
	printf(" - Return: %d\n", or);
	ft = ft_printf("My: %-10c - %-10s - %-10d - %-10x - %-10X - %-20p - %-10u", c, s, 0, hex, hex, &n, u);
	printf(" - Return: %d\n", ft);

	printf("\nonly width:\n");
	or = printf("Or: %10c - %10s - %10d - %10x - %10X - %20p - %10u", c, s, 0, hex, hex, &n, u);
	printf(" - Return: %d\n", or);
	ft = ft_printf("My: %10c - %10s - %10d - %10x - %10X - %20p - %10u", c, s, 0, hex, hex, &n, u);
	printf(" - Return: %d\n", ft);

	printf("\ndot:\n");
	or = printf("Or: %.1s - %.4d - %.10x - %.10X - %.2u", t, -1, hex, hex, u);
	printf(" - Return: %d\n", or);
	ft = ft_printf("My: %.1s - %.4d - %.10x - %.10X - %.2u", t, -1, hex, hex, u);
	printf(" - Return: %d\n", ft);
}
