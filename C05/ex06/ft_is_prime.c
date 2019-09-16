/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 15:50:25 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/15 16:22:58 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i != 0)
			i++;
		else 
			return (1);
	}
	return (0);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_is_prime(6));
	return (0);
}

