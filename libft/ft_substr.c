/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 05:44:06 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 09:53:25 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "libft.h"

// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
//     char	*ptr;
//     size_t	i;
//     i = 0;

//     if(!s)
//         return (NULL);
//     // Calculamos la longitd máxima de la cadena desde start.
//     size_t s_len;
//     s_len = ft_strlen(s);
    
//     //si start es mayor o igual a la longitud de s, retornamos la cadena vacia
//      if (start >= s_len)
//         return (ft_strdup(""));
    
//     //Si len es mayor que max_len, ajustamos len
//     if(start + len > s_len)
//         len = s_len - start;
    
//     ptr = malloc((len + 1) * sizeof(char));
//         if(!ptr)
//         return (NULL);
    
//     while (i < len && s[start + i])
//     {
//         ptr[i] = s[start + 1];
//         i++;
//     }
//     ptr[i] = '\0';

//     return (ptr);
// }

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}