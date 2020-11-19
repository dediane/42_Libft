/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:12:02 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/19 11:58:48 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int i;
	int j;
	int size;
	char *nb;
	
	size = 0;
	i = n;
	j = 1;
	if (nbr < 0)
		size++;
	while (i >= 0)
		i = i / 10;
		size++;
	if (!(nb = malloc(sizeof(char) * size + 1)))
		return (NULL);
	if (j == -1)

	while (i > 0)
	{
		nb[size] = i % 10;
		size--;
	}
}
