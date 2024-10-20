/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 02:30:30 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 12:42:21 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len_s1;
	const char	*first;
	const char	*last;
	char		*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	first = s1;
	last = s1 + len_s1 - 1;
	while (first <= last && is_in_set(*first, set))
		first++;
	while (last >= first && is_in_set(*last, set))
		last--;
	trimmed_str = ft_substr(first, 0, last - first + 1);
	return (trimmed_str);
}
// char *ft_strtrim(char const *s1, char const *set)
// {
//     int i;
//     int len_d;
//     int len_i;
//     len_d = ft_strlen(s1);
//     len_i = 0;

//     if (!s1 | !set)
//         return (NULL);

//     i = ft_strlen(s1);

//     while (s1[--i] && ft_strrchr(set, s1[i]))
//         len_d--;
//     i = -1;
//     while (s1[++i] && ft_strrchr(set, s1[i]))
//         len_i++;

//     i = len_d - len_i;

//     return (ft_substr(s1, len_i, i));

// #include <stdio.h>
// #include <stdlib.h>

// Asegúrate de definir ft_strlen, ft_strrchr y ft_substr antes de esto
// int ft_strlen(const char *s);
// char *ft_substr(char const *s, unsigned int start, size_t len);
// char *ft_strrchr(const char *s, int c);

// char *ft_strtrim(char const *s1, char const *set);

// int main() {
//     char str[100];
//     char set[100];

//     // Solicitar al usuario que ingrese la cadena original
//     printf("Ingresa la cadena a recortar: ");
//     fgets(str, sizeof(str), stdin);

//     // Solicitar al usuario que ingrese el conjunto de caracteres a recortar
//     printf("Ingresa los caracteres a recortar: ");
//     fgets(set, sizeof(set), stdin);

//     // Eliminar el salto de línea que puede quedar en la entrada
//     str[strcspn(str, "\n")] = '\0';
//     set[strcspn(set, "\n")] = '\0';

//     char *trimmed = ft_strtrim(str, set);

//     if (trimmed) {
//         printf("Original: '%s'\n", str);
//         printf("Trimmed: '%s'\n", trimmed);
//         free(trimmed);  // No olvides liberar la memoria asignada
//     } else {
//         printf("Error: Failed to trim the string.\n");
//     }

//     return (0);
// }