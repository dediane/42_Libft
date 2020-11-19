/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:28:41 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/19 16:29:15 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	int k;
	int size;
	char **tab;

	i = 0;
	j = 0;
	k = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == c)
			size++;
		i++;
	}
	if (!(tab = malloc(sizeof(char*) * size + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i + j])
		{
			if (s[i + j] == c)
			{
				if (!(tab[k] = malloc(sizeof(char) * j + 1)))
					return (NULL);
				k++;

			}
			j++;
		}
	}
	return (tab);
}
