/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:24:18 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/22 22:53:31 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char c = 'c';
	char s[] = "Hello, world!";
	int	n1 = 42;
	int	n2 = -42;
	int	n3 = 255;
	unsigned int u = 55;
	int or = 0;
	int ft = 0;
	
	printf("\nBonus test:\n\n");

	printf("Space:\n\n");
	or = printf("Or:% d", n1);
	printf(" | Return: %d\n", or);
	ft = ft_printf("My:% d", n1);
	printf(" | Return: %d\n", ft);
	or = printf("Or:% d", n2);
	printf(" | Return: %d\n", or);
	ft = ft_printf("My:% d", n2);
	printf(" | Return: %d\n", ft);

	printf("\nPlus:\n\n");
	or = printf("Or:%+d", n1);
	printf(" | Return: %d\n", or);
	ft = ft_printf("My:%+d", n1);
	printf(" | Return: %d\n", ft);
	or = printf("Or:%+d", n2);
	printf(" | Return: %d\n", or);
	ft = ft_printf("My:%+d", n2);
	printf(" | Return: %d\n", ft);

	printf("\nHashtag:\n\n");
	or = printf("Or:%#x", n3);
	printf(" | Return: %d\n", or);
	ft = ft_printf("My:%#x", n3);
	printf(" | Return: %d\n", ft);
	or = printf("Or:%#X", n3);
	printf(" | Return: %d\n", or);
	ft = ft_printf("My:%#X", n3);
	printf(" | Return: %d\n", ft);

	printf("\nZero:\n\n");
	or = printf("Or: %01d | %05x | %05X | %05u", n1, n2, n3, u);
	printf(" | Return: %d\n", or);
	ft = ft_printf("My: %01d | %05x | %05X | %05u", n1, n2, n3, u);
	printf(" | Return: %d\n", ft);

	printf("\nminus:\n\n");
	or = printf("Or: %-3c | %-1s | %-4d | %-3x | %-1X | %-15p | %-5u", c, s, n1, n2, n3, &n1, u);
	printf(" | Return: %d\n", or);
	ft = ft_printf("My: %-3c | %-1s | %-4d | %-3x | %-1X | %-15p | %-5u", c, s, n1, n2, n3, &n1, u);
	printf(" | Return: %d\n", ft);

	printf("\nonly width:\n\n");
	or = printf("Or: %2c | %15s | %1d | %7x | %3X | %1p | %3u", c, s, n1, n2, n3, &n1, u);
	printf(" | Return: %d\n", or);
	ft = ft_printf("My: %2c | %15s | %1d | %7x | %3X | %1p | %3u", c, s, n1, n2, n3, &n1, u);
	printf(" | Return: %d\n", ft);

	printf("\ndot:\n\n");
	or = printf("Or: %.1s | %.4d | %.10x | %.15X | %.3u", s, n1, n2, n2, u);
	printf(" | Return: %d\n", or);
	ft = ft_printf("My: %.1s | %.4d | %.10x | %.15X | %.3u", s, n1, n2, n2, u);
	printf(" | Return: %d\n\n", ft);
}
