/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:25:39 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/19 17:28:22 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

#include <stdio.h>
int main(void)
{
	t_point point;
	set_point(&point);
	printf("%d | %d\n", point.x, point.y);
	return (0);
}
