/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:46:04 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/17 17:21:01 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_strdup(char *src)
{
	char *ptr = NULL;
	ptr = malloc(7 * sizeof(char));
	ptr = src;
	printf("malloc : %s\n", ptr);
	return 0;
}


int	main()
{
	ft_strdup("chacha");
	printf("strdup : %s\n", strdup("aaa"));
	return 0;
}







