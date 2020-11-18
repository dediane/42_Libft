/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:28:41 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/18 14:35:27 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	int k;
	int size;
	char **tab

		i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == c)
			size++;
	}
	if (!(tab = malloc(sizeof(char*) * size + 1)))
		return (NULL);
	while (str[i])
	{
		j = 0;
		while (str[i + j])
		{
			if (str[i + j] == c)
			{
				if (!(tab[k] = malloc(sizeof(char) * j + 1)))
					return (NULL);
				k++;

			}
			j++;
		}
	}
}
