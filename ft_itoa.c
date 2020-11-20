/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:12:02 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/20 17:27:13 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(long int n)
{
	int size;

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
	return (size);
}



char	*ft_itoa(int n)
{
	long int	nb;
	int		size;
	char		*num;

	nb = (long int)n;
	size = get_size(nb);
	printf("valeur de size = %d\n", size);
	if (!(num = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	printf("Valeur de nb = %ld\n\n", nb);
	if (nb < 0)
		nb *= -1;
	num[0] = '\0';
	while (size > 0)
	{
		printf("valeur de nb = %ld\n",nb);
		num[size--] = nb % 10 + 48;
		printf("valeur de size = %d\n",size);
		printf("valeur de num[size] = %s\n", &num[size]);
		nb = nb / 10;
		printf("valeur de nb = %ld\n\n",nb);	
	}
	if (n < 0)
		num[size] = '-';
	return (num);
}


int main(void)
{
	int n = -2356;
	printf("Valeur de retour de fonction: %s", ft_itoa(n));
}
