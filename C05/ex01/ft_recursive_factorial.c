/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:59:14 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/16 15:38:40 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}

	else if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (0);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_recursive_factorial(7));
	return (0);
}
