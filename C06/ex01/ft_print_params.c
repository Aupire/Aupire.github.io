/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:31:36 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/11 15:42:26 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str)
{
	int		i;

	i = 0;
	while (str[i])			
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		j;

	j = 1;
	argc = 1;
	while (argv[j])
	{
		ft_print_params(argv[j]);
		j++;
	}
	return (0);
}
