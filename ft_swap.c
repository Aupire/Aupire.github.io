/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 17:51:55 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/02 18:27:03 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_swap(int *a, int *b)
{

	int c = 2;
	int d = 4;
	*a = c;
	*b = d;

	c = *b;
	d = *a;

	char f = c + 48;
	char g = d + 48;

	write(1, &f, 1);
	write(1, &g, 1);
}

int	main()
{

	int c = 2;
	int d = 4;
	ft_swap(&c, &d);
}
