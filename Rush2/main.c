/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 23:04:14 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/13 23:29:55 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int a_convertir;

	if (argc == 1)
	{
		argv[1] = a_convertir;
	}

	else if (argc == 2) 
	{
		argv[1] = DICO_a_utiliser;
		argv[2] = a_convertir;
	}

	if (a_convertir <= 0)
	{
		write(1, "Error\n", 7);
	}

	if (DICO_a_utiliser != 0)
	{
		write(1, "Error\n", 1);
	}

}
