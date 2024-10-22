/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 01:56:55 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/15 05:11:25 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_size(int j)
{
	int		i;

	if (j == 0)
		return (1);
	i = 0;
	if (j < 0)
	{
		i = 1;
		j = -j;
	}
	while (j > 0)
	{
		i ++;
		j = j / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	int			j;
	char		*str;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	i = nb_size(n);
	str = ft_calloc(sizeof(char), i + 1);
	if (!str)
		return (NULL);
	j = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		j = 1;
	}
	i--;
	while (i >= j)
	{
		str[i] = (n % 10) + '0';
		i--;
		n = n / 10;
	}
	return (str);
}
