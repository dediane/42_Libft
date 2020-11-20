/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:12:02 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/20 18:56:04 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(long int n)
{
	int			size;

	size = 0;
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	if (size == 0)
		return (1);
	return (size);
}

char		*ft_itoa(int n)
{
	long int	nb;
	int			size;
	char		*num;

	nb = (long int)n;
	size = get_size(nb);
	if (!(num = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (nb < 0)
		nb *= -1;
	num[size] = '\0';
	while (size > 0)
	{
		num[--size] = nb % 10 + 48;
		nb = nb / 10;
	}
	if (n < 0)
		num[size] = '-';
	return (num);
}
