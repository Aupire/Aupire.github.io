/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 18:22:22 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/08/30 10:34:38 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d);
void	ft_print_comb(void);
void	ft_put(char e, char f, char g);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while (a < '8')
	{
		b = a + 1;
		while (b < '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_put(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_put(char e, char f, char g)
{
	ft_putchar(e);
	ft_putchar(f);
	ft_putchar(g);
	if (e != '7' || f != '8' || g != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char d)
{
	write(1, &d, 1);
}
