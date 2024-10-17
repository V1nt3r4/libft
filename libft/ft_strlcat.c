/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:21:21 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/17 10:37:40 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	j = 0;
	l = 0;
	while (dest[l] != '\0' && l < size)
		l++;
	j = l;
	while (src[i] != '\0')
		i++;
	if (size == 0 || l >= size)
		return (l + i);
	while (j < (size - 1) && src[j - l] != '\0')
	{
		dest[j] = src[j - l];
		j++;
	}
	dest[j] = '\0';
	return (l + i);
}

int main() {
	char	dst[20] = "Hola";
	char	src[] = "Mundo!!!";

	size_t	result = ft_strlcat(dst, src, sizeof(dst));

	printf("La cadena combinada es: %s\n", dst);
	printf("La longitud de la cadena resultante: %zu\n", result);

	return(0);
}