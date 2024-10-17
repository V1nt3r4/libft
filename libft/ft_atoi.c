/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:15:27 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/17 18:35:26 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result_j;
	int	sign_k;

	i = 0;
	sign_k = 1;
	result_j = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign_k = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		result_j = result_j * 10 + (nptr[i++] - 48);
	return (result_j * sign_k);
}
