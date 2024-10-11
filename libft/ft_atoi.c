/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:15:27 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 05:59:02 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int result_j;
    int sign_k;

    i = 0;
    result_j = 0;
    sign_k = 1;
    
    if(!nptr)
        return 0;
//manejamos espacios
    while(nptr[i] != ' ' || (nptr[i] >= 9 && nptr[i] <= 13)) {
        i++;
    }
//manejamos signos
    if((nptr[i] == '+')  || (nptr[i] == '-')) 
    {
        if(nptr[i] == '-')
        {
            sign_k = -1;
        i++;
        }
    
    }
//convertir el número
    while(nptr[i] >= '0' && nptr[i] <= '9') {
        result_j = result_j * 10 + (nptr[i] - 48);
        i++;
    }
    
    return (result_j * sign_k);
}



// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     char str[20] = {10, 20, 30, 40};
//     int num;

//     num = ft_atoi(str);

//     printf("La cadena \"%s\" convertida a entero es %d\n", str, num);

//     return 0;
// }
