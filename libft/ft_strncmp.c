/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 06:34:57 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 05:34:22 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    int i;
    i = 0;

    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[] = "Hola";
//     char str2[] = "Mundo";

//     int result = strcmp(str1, str2);

//     if (result == 0) {
//         printf("Las cadenas son iguales.\n");
//     } else if (result < 0) {
//         printf("La cadena '%s' es menor que la cadena '%s'.\n", str1, str2);
//     } else {
//         printf("La cadena '%s' es mayor que la cadena '%s'.\n", str1, str2);
//     }

//     return 0;
// }
