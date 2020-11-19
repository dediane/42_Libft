/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 01:00:47 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/19 13:40:20 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	size;

	size = ft_strlen(s) - start;
	i = 0;
	if (size < len)
	{
		if (!(str = malloc(sizeof(char) * size + 1)))
			return (NULL);
	}
	else
	{
		if (!(str = malloc(sizeof(char) * len)))
			return (NULL);
	}
	while (i < size && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
