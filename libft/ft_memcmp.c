/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 03:21:10 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 05:49:57 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;
    size_t              c;
    
    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    c = 0;
    if (!s1 || !s2 || !n)
        return (0);
    while(c < n)
    {    
       if(str1[c] != str2[c])
            return (str1[c] - str2[c]);
        c++;
    }
    return (0);
}

// size_t ft_strlen(char *str);

// int main(){
//     char *str1 = "holaweqwe";
//     char *str2 = "oasdqq";
//     int result = ft_memcmp(str1, str2, 0);
//      int result2 = memcmp(str1, str2, 0);

//         if (result == 0) {
//         printf("Los bloques de memoria son iguales.\n");
//     } else if (result < 0) {
//         printf("El bloque de memoria s1 es menor que el bloque s2.\n");
//     } else {
//         printf("El bloque de memoria s1 es mayor que el bloque s2.\n");
//     }

//     if (result2 == 0) {
//         printf("Los bloques de memoria son iguales.\n");
//     } else if (result2 < 0) {
//         printf("El bloque de memoria s1 es menor que el bloque s2.\n");
//     } else {
//         printf("El bloque de memoria s1 es mayor que el bloque s2.\n");
//     }

//     return 0;
// }


// size_t ft_strlen(char *str)
// {
//     size_t i;
//     while(str[i] != '\0')
//         i++;
//     return (i);
// }