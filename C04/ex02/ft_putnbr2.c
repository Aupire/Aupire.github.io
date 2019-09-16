/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:59:33 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/12 18:36:55 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	unb;

	if (nb < 0)
	{
		unb = -nb;
		write(1, "-", 1);
	}
	else
		unb = nb;
	if (unb > 9)
	{
		ft_putnbr(unb / 10);
		ft_putnbr(unb % 10);
	}
	else
	{
		unb += 48;
		write(1, &unb, 4);
	}
}
