/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:22:45 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/18 19:27:33 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *b, int c, size_t len)
{
	unsigned char *a = NULL;

	*a = (unsigned char)b;
	while (len-- > 0)
	{
		*(a++) = (unsigned char)c;
	}
}
