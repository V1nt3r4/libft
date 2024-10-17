/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 03:20:54 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/17 16:22:09 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && little[j] == big[i + j] && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

int main() {
	char	str[] = "Hola Mundo";
	char	sub[] = "Mun";
	size_t	n = '9';
	char	*result = ft_strnstr(str, sub, 9);

	if(result)
		printf("La subcadena '%s' se encontró en la posición: %ld\n", sub, result - str);
	else
		printf("No se encontró");

	return (0);
}