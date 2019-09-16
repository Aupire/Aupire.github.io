/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:18:30 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/13 18:51:52 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		m;
	long	nb_printf;

	i = 0;
	m = 1;
	nb_printf = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			m = m * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb_printf = nb_printf * 10;
		nb_printf = (nb_printf + str[i] - 48);
		i++;
	}
	return (nb_printf * m);
}

int main(int ac, char **av)
{
	printf("atoi    = %d\n", atoi(av[1]));
	printf("ft_atoi = %d\n", ft_atoi(av[1]));
}
