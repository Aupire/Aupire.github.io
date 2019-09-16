/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 19:20:12 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/02 16:37:51 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{

	int x;
	int xa;
	int xaa;
	int xaaa;
	int xaaaa;
	char c;
	char d;
	char e;
	char f;
	char g;
	char h;

	h = '-';
	if (nb > 0)
	{
		if (nb > 9999)
		{
			xaaaa = nb / 10000;
			c = xaaaa + 48;
			write(1, &c, 1);
		}
		if (nb > 999)
		{
			xaaa = nb / 1000;
			xaaa = xaaa % 10;
			d = xaaa + 48;
			write(1, &d, 1);
		}
		if (nb > 99)
		{
			xaa = nb / 100;
			xaa = xaa % 10;
			e = xaa + 48;
			write(1, &e, 1);
		}
		if (nb > 9)
		{
			xa = nb / 10;
			xa = xa % 10;
			f = xa + 48;
			write(1, &f, 1);
		}
		if (nb > 9)
		{
			x = nb % 10;
			g = x + 48;
			write(1, &g, 1);
		}
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, &h, 1);
		if (nb > 9999)
		{
			xaaaa = nb / 10000;
			c = xaaaa + 48;
			write(1, &c, 1);
		}
		if (nb > 999)
		{
			xaaa = nb / 1000;
			xaaa = xaaa % 10;
			d = xaaa + 48;
			write(1, &d, 1);
		}
		if (nb > 99)
		{
			xaa = nb / 100;
			xaa = xaa % 10;
			e = xaa + 48;
			write(1, &e, 1);
		}
		if (nb > 9)
		{
			xa = nb / 10;
			xa = xa % 10;
			f = xa + 48;
			write(1, &f, 1);
		}
		if (nb > 9)
		{
			x = nb % 10;
			g = x + 48;
			write(1, &g, 1);
		}
	}
}

int	main(void)
{
	ft_putnbr(32768);
}
