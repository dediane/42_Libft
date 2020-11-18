/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:31:06 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/18 23:39:57 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *p;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	if (!(p = malloc(count * size)))
		return (NULL);
	return (p);
}
