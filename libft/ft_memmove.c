/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 00:24:41 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/09 05:58:44 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>
#include <stdio.h>
#include <unistd.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned const char *s;
    
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    
    if(!dest || !src) return NULL;
    if((d > s) && (d > (s + n))) 
    {
        size_t i = n;
            while(i > 0) 
            {
                i--;
                d[i] = s[i];
            }
    }else{
        size_t i = 0;    
            while(i < 0)
            {      
                d[i] = s[i];
                i++;
            }
    }
    

    return dest;
}

// int main() {
//     //Prueba de solapamiento
//     char src[] = "Hello, World!";

//     //queremos mover "Hello" más adelante en la misma cadena
//     printf("Antes de memmove: %s\n", src);

//     memmove(src + 7, src, 5); //Mover "Hello" a la posición 7
//     printf("Después de memmove (solapamiento): %s\n", src);

//     //SIN SOLAPAMIENTO
    
    
//     //char src[] = "123456"
//     char dest[10];
    
//     //Queremos copiar "12345" een un destino diferente
//     printf("Antes de memmove (sin solapamiento): dest = %s\n", dest);
 
//     memmove(dest, src, 5); //Copiar los primeros 5 caracteres de src a dest
//     dest[5] = '\0'; // Aseguramos que el string esté terminado con '\0'

//     printf("Después de memmove (sin solapamiento): dest = %s\n", dest);
    
//     return  0;
// }