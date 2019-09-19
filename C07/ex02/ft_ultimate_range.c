/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:15:02 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/18 16:25:30 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab = NULL;
	int i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (-1);
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}

#include <stdio.h>
int main(void)
{
	int	tab[] = {0};
	int i;
	int min = -5;
	int max = 15;
	int *ptr = tab;	

	i = 0;
	printf("il se passe un truc\n");
	printf("%d\n", ft_ultimate_range(&ptr, min, max));
	i = 0;
	while (i != (max - min))
	{
		printf("%d ", ptr[i]);
		i++;
	}
	printf("\n");
	printf("%d\n", i);
	return (0);
}

