/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandatory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:24:18 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/04/22 22:37:13 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char c = 'c';
	char s[] = "Hello, world!";
	int	n1 = INT_MIN;
	int	n2 = INT_MAX;
	int	n3 = 0;
	unsigned int u = 55;
	int or = 0;
	int ft = 0;
	
	printf("Mandatory test:\n\n");

	or = printf("Or %%c: %c ", c);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%c: %c ", c);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%s: %s ", s);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%s: %s ", s);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%d: %d - %d - %d ", n1, n2, n3);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%d: %d - %d - %d ", n1, n2, n3);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%i: %i - %i - %i ", n1, n2, n3);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%i: %i - %i - %i ", n1, n2, n3);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%x: %x - %x - %x ", n1, n2, n3);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%x: %x - %x - %x ", n1, n2, n3);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%X: %X - %X - %X ", n1, n2, n3);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%X: %X - %X - %X ", n1, n2, n3);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%u: %u ", u);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%u: %u ", u);
	printf("Return: %d\n", ft);

	printf("\n");

	or = printf("Or %%p: %p ", &u);
	printf("Return: %d\n", or);
	ft = ft_printf("My %%p: %p ", &u);
	printf("Return: %d\n", ft);

	printf("\n");

	printf("Mix printf:\n");
	or = printf("\nThis is a mix of tests\n%c and %s\n%d, %i and %u\n%x and %X\nfinishing with %p\n", c, s, n1, n2, u, n2, n2, &s);
	printf("\nReturn: %d\n", or);
	printf("\nMix ft_printf:\n");
	ft = ft_printf("\nThis is a mix of tests\n%c and %s\n%d, %i and %u\n%x and %X\nfinishing with %p\n", c, s, n1, n2, u, n2, n2, &s);
	printf("\nReturn: %d\n", ft);

	printf("\n");
}
