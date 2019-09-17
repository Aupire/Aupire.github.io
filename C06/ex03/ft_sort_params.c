/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:37:10 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/17 12:42:34 by gfaure-l         ###   ########.fr       */
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


int		main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	int n;
	int m;
	int i;
	int j;
	char *a = NULL;
	char *b = NULL;
	char *tmp = NULL;

	i = 1;
	j = 2;
	n = 0;
	m = 0;

	while (argv[n])
	{
		m = argv[i] - argv[j];
		if (m > 0)
		{
			tmp[i] = argv[i];
			argv[i] = argv[j];
			argv[j] = tmp[i];
		}
		j++;
		i++;
	}
	return (0);
}

