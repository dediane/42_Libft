/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:34:52 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/18 19:39:12 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long i;
	unsigned long j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && needle[j] && j <= len)
			j++;
		if (j == len)
			return ((char*)haystack + i);
		i++;
	}
	return (0);
}
