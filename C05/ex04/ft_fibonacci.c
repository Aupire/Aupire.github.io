/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 14:10:55 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/15 15:27:56 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int i;
	int a;
	int b;

	i = 0;
	a = 0;
	b = 1;
	if (index < 0 )
		return (-1);
	while (i < index)
	{
		if (i % 2 == 0)
			a = b + a;
		else if (i % 2 == 1)
			b = b + a;
		i++;
	}
	return (a);
}

#include <stdio.h>

int	main ()
{
	printf("%d/n", ft_fibonacci(-2));
	return (0);
}
