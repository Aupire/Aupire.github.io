/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:57:14 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/13 20:10:43 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i;
	int nb2;

	i = 1;
	nb2 = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);

	while ( i <= power)
	{
		nb2 = nb2 * nb;
		i++;
	}
	return (nb2);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(1, 1));
	return (0);
}


