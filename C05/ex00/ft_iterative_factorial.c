/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:16:52 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/17 18:07:26 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int a;

	a = 1;
	if (nb < 0)
		return 0;
	else if (nb == 0)
		return 1;
	while (nb != 0)
	{
		a = a * nb;
		nb--;
	}
	return (a);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
}
