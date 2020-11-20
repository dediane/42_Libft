/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 01:37:59 by ddecourt          #+#    #+#             */
/*   Updated: 2020/11/20 12:25:26 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;
	int	len;
	char		*s2;

	i = 0;
	j = 0;
	k = 0;
	len = ft_strlen(s1);
	while (is_in_set(s1[i], set))
		i++;
	printf("i = %d\n", i);
	while (is_in_set(s1[(len -1) - j], set))
		j++;
	printf("j = %d\n", j);
	if (!(s2 = malloc(sizeof(char) * (len  - (i + j + 1)))))
		return (NULL);
	while (k + i < (len - j))
	{
		s2[k] = s1[k + i];
		k++;
	}
	s2[k] = '\0';
	return (s2);
}

int main(void)
{
	char const *s1;
	char const *set;

	s1 = "###bonjour#bonjour###";
	set = "#";
	printf("%s", ft_strtrim(s1, set));
}
