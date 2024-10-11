/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 03:20:54 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 05:54:03 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    
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


// int main() {
//     char str1[] = "Hola, cómo estás?";
//     char str2[] = "cómo";
//     char *result;
//     size_t len = ft_strlen(str1);
//     size_t len2 = ft_strlen(str2);
//     size_t total_len = len + len2;
    
//     result = ft_strnstr(str1, str2, total_len);
    
//     if (result) {
//         printf("La subcadena se encontró en: %s\n", result);
//     }else{
//         printf("La subcadena no se encontró.\n");
//     }

//     return 0;
// }

// size_t ft_strlen(char *str)
// {
//     int i;
//     while(str[i] != '\0')
//         i++;
//     return (i);
// }