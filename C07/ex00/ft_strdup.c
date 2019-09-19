/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:46:04 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/19 15:35:53 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	if (src[0] == '\0')
		return (NULL);
	while (src[i])
		i++;
	if (!(ptr = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ptr = src;
	return (ptr);
}


#include <string.h>
int	main()
{
	printf("user--- %s\n", ft_strdup("chacha"));
	printf("strdup : %s\n", strdup("chacha"));
	return 0;
}







