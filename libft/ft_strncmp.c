/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 06:34:57 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/17 15:50:40 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int main() {
	char	arr1[] = "Hola";
	char	arr2[] = "Holando";
	int		n = 4;
	int		result;
	
	result = strncmp(arr1, arr2, 4);
	
	if(result == 0)
		printf("Las cadenas son iguales en los primeros %d carácteres.\n", n);
}
