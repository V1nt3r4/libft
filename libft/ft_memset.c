/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:18:21 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 09:04:19 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

 void ft_memset(void *b, int c, size_t len)
 {
    unsigned char *ptr = (unsigned char *)b;
    while (len--) {
        *ptr++ = (unsigned char)c;
    }
 }
// //  int main() {
//     char arr[10];
    
//     //Rellea los primeros 10 bytes del array ccon el valor 'A'
//     ft_memset(arr, 'a', sizeoff(arr));

//     //Imprime eel contenido del array
//     for(int i = 0; i < 10; i++) {
//         printf("%c", arr[i]);
//     }

//     return 0;
    
//  }
//  */