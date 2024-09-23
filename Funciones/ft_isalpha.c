/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:32:01 by ari               #+#    #+#             */
/*   Updated: 2024/09/22 15:53:27 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isalpha(int c) 
{
    if((c <= 'A' && >= 'Z') || (c <= 'a' && >= 'z')) {
        return 1;
    }

    return 0;
}

/* PROTOTIPO DE FUNCIÓN: 
    - int ft_isalpha(int c)
    
   DESCRIPCIÓN:
    - La función ft_isalpha toma un entero que presenta el valor de ASCII de un 
    carácter. Retorna 1 si el carácter pasado es una letra (tanto si es mayúscula
    como en minúscula) y cero en caso contrario.
    
   PARÁMETRO:
    - C: Este es el carácter que se evaluará. Aunque se recibe como un entero
    lo normal es que este valor se corresponda como un valor ASCII  de un 
    carácter.
    
   VALOR DE RETORNO:
    - Retorna 1 si el valor de C corresponde a una letra alfabética (es decir, una
    letra entre 'a' y 'z' o entre 'A' y 'Z').
    - Retorna 0 en cualquier otro caso.
    
   USO COMÚN:
    - Esta función es útil cuando se necesita validar si un carácter es una letra, 
    especialmente en un proyecto que involucren manipulación de cadenas de texto
    o validaciones de entrada.
    
   EJEMPLO DE USO:
    #include <stdio.h>
    
    int ft_isalpha(int c);
    {
        char ch = 'A';
        if(ft_isalpha(ch))
            printf("%c es una letra\n, ch");
        else
            printf("%c no es una letra, ch");

            return 0;
    }*/
