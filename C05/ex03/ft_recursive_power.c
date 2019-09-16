/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:48:38 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/14 19:48:38 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int a;

	if (power > 1)
	{
		a = nb * ft_recursive_power(nb, --power);
		return (a);
	}

	else if (power < 0)
		return (0);
	else if (nb == 0 && power == 1)
		return (0);
	else if (nb == 0)
		return (1);
	return (nb);

}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_recursive_power(1, 1));
	return (0);
}
