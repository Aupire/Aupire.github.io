/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:59:11 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/07 16:56:12 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i = 0;
	ft_putstr("aaaa");
	char *a = argv[1];
	while (a[i])
	{
		a[i] += 1;
		i++;
	}
	ft_putstr(a);
	return (0);
}

