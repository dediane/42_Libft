/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 00:28:01 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/18 22:51:03 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t destlen;
	size_t srclen;
	size_t i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (srclen);
	if (size < destlen + 1)
		return (srclen + size);
	while (src[i] && destlen + i < size - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	while (dest[destlen + i])
	{
		dest[destlen + i] = '\0';
		i++;
	}
	return (destlen + srclen);
}
