/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 10:39:12 by lduchemi          #+#    #+#             */
/*   Updated: 2019/08/31 16:12:35 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	haut(int x)
{
	if (x > 0)
	{
		if (x == 1)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('A');
			while (x - 2 != 0)
			{
				ft_putchar('B');
				x--;
			}
			ft_putchar('C');
		}
	}
}

void	bas(int x)
{
	if (x > 0)
	{
		if (x == 1)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('A');
			while (x - 2 != 0)
			{
				ft_putchar('B');
				x--;
			}
			ft_putchar('C');
		}
	}
}

void	mid(int x, int y)
{
	int i;
	int j;

	if (y > 1)
	{
		j = 0;
		while (j < y - 2)
		{
			ft_putchar('\n');
			ft_putchar('B');
			i = 0;
			while (i < x - 2)
			{
				ft_putchar(' ');
				i++;
			}
			if (x > 1)
			{
				ft_putchar('B');
			}
			j++;
		}
	}
}

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
	}
	else if (x >= 1 && y >= 1)
	{
		haut(x);
		mid(x, y);
		ft_putchar('\n');
		if (y > 1)
		{
			bas(x);
		}
	}
}
