/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:16:52 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/16 15:36:27 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int a;

	a = 1;
	if (nb <= 0)
		return 0;
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
	printf("%d\n", ft_iterative_factorial(7));
	return (0);
}
