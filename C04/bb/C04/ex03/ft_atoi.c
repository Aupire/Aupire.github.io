/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:18:30 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/16 13:39:38 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		m;
	int	nb_printf;

	i = 0;
	m = 1;
	nb_printf = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m = m * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb_printf = nb_printf * 10 + str[i] - 48;
		i++;
	}
	return (nb_printf * m);
}

#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	ac = 1;
	printf("atoi    = %d\n", atoi(av[1]));
	printf("ft_atoi = %d\n", ft_atoi(av[1]));
}
