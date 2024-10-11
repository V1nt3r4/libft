/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:21:21 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/04 01:33:52 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i = 0; // dst_len
    size_t j = 0; // src_len
    size_t k; // total_len
    
    k = i + j;

  while(dst[i] != '\0' && i < size)
  {
    i++;
  }
  while(src[j] != '\0' && i < size)
  {
    j++;
  }

  if(i >= size)
        return (j + size);
    
  j = 0;
  while(i < size && src[j] != '\0') 
    {
      dst[i] = src[j];
      i++;
      j++;
    }
      if(i < size) // nos aseguramos de que dst esté terminada en NULL
    dst[i] = '\0';
      
    return (k); //devuelve la longitud inicial de dst más la longitud de src --- return (dst + src);
}



// int main()
//   {
//     char destino[] = "Hola, ";
//     const char *origen = "mundo!";
//     size_t tamaño = sizeof(destino);

//     size_t resultado = ft_strlcat(destino, origen, tamaño);

//     printf("Cadena resultante: %s\n", destino);
//     printf("Longitud total: %zu\n", resultado);

//     return 0;
// }