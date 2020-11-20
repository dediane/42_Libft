/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 01:32:27 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/20 15:24:05 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		size;
	char	*dst;

	size = ft_strlen(s);
	i = 0;
	if (!(dst = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	dst[size] = '\0';
	while (s[i])
	{
		dst[i] = (*f)(i, s[i]);
		i++;
	}
	return (dst);
}
