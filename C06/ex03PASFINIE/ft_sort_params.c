/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:37:10 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/12 20:28:40 by gfaure-l         ###   ########.fr       */
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
	int		j;
	int		i;
	char tmp[0] = "";


	i = 1;
	j = 2;
	argc = 1;
	while (argv[j] != '\0')
	{
		if (argv[i] < argv[j])
		{
			tmp[i] = *argv[i];
			argv[i] = argv[j];
			*argv[j] = tmp[i];
		}
		j++;
		i++;
	}
	j = 1;
	while (argv[j])
	{
		ft_print_params(argv[j]);
		j++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int n;
	int c;

	n = 0;
	c = 0;
	while (s1[n] || s2[n])
	{
		if (s1[n] == s2[n])
		{
			n++;
		}
		else if (s1[n] != s2[n])
		{
			c = s1[n] - s2[n];
			return (c);
		}
	}
	return (c);
}
