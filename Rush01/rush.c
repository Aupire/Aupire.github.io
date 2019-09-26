/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:59:11 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/07 20:05:24 by gfaure-l         ###   ########.fr       */
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

void	ft_imp_tab(int **tab) // imprime le tablau a l'ecran
{
	int tabX = 0;
	int tabY = 0;
	int tabXY[3][3];

	while (tabY < 4)
	{
		while (tabX < 3)
		{
			ft_putstr( tabXY[tabX][tabY] );
			ft_putstr(" ");
			tabX++;
		}
		while (tabX < 4)
		{
			ft_putstr( tabXY[tabX][tabY] );
			ft_putstr("\n");
			tabX++;
		}
		tabY++;
		tabX = 0;
	}
}

void	ft_tab_entree(char **ENTREE)
{
	int b = 0;
	int i = 0;
	int j = 0;

	char *a = ENTREE[1]; //copie l'entree vers tableau temporaire
	
	int TAB[3][3];
	while (a[b] && j < 4)
	{
		while (i < 4)
		{
			if (a[b] == 40)
				b++;
			tab[i][j] = a[b];
			i++;
			b++;
		}
		j++;
		i = 0;
	}
	ft_putstr(a);
}

