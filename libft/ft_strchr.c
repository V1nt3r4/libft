/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:18:36 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 05:22:44 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    
    while(*s) {
     if(*s == (char)c)
        return ((char *)s);   
    }
    s++;
    
    if(c == '\0')
        return ((char *)s);
    return (NULL);
    
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     const char *s = "Hola Mundo";
//     char c = 'H';
//     char *result = strchr(s, c);

//     if (result != NULL) {
//         printf("El carácter '%c' se encontró en la posición: %ld\n", c, result - s);
//     } else {
//         printf("El carácter '%c' no se encontró.\n", c);
//     }

//     return 0;
// }

