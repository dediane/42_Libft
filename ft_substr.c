/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 01:00:47 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/18 23:20:59 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	size_t		size;

	i = 0;
	while (s[i])
		i++;
	size = i - start;
	i = -1;
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
	while (str[i] && ((start + i) < len))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
