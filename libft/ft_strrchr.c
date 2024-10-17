/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 06:10:29 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/17 14:25:54 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (c >= 256)
		c = c % 256;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
int main() {
	char 	*str = "Finis Mundi";
	char	ch = 'n';
	char	*result;
	
	result = ft_strrchr(str, ch);
	
	if(result)
		printf("El carácter '%c' se encontró en la posición %ld\n", ch, result - str);
	else
		printf("No se encontró rey");
		
	return (0);
}
