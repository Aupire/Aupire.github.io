/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:15:02 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/18 15:22:57 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab = NULL;
	int i;

	if (min >= max)
	{
		return (0);
		range = NULL;
	}
	i = 0;
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (0);
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	if (**range != (max - min))
		return (-1);
	return (i);
}
