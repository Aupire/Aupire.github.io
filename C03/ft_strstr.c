/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:03:08 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/08 23:01:15 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return(&str[i]);
	while (str[i] != to_find[j])
	{
		i++;
		if (str[i])
			return (0);
	}
	while (str[i] != '\0')
	{
		to_find[j] = str[i];
		i++;
		j++;
	}
	to_find[j] = '\0';
	return (&to_find[j]);
}

int main()
{
	char hh[] = "aaabbbccc";
	char nn[] = "bbb";
	printf("%s\n", ft_strstr(hh, nn));
}


/*
int main()
{
	const char haystack[] = "aaabbbccc";
	const char needle[] = "bbb";

	printf("%s\n", strstr(haystack, needle));
}*/


