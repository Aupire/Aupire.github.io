/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:29:23 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/15 17:40:55 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (2);
	while (i < nb)
	{
		if (nb % i != 0)
			i++;
		else
			nb++;
	}
	return (nb);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_find_next_prime(6));
	return (0);
}

