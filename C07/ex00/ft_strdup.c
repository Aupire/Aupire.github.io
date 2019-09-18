/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:46:04 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/18 14:42:03 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_strdup(char *src)
{
	char *ptr = NULL;
	ptr = malloc(7 * sizeof(char));
	if (ptr == NULL)
		return (0);
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







