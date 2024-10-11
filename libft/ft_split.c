/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 05:48:38 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 06:31:47 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_words(const char *s, char c)
{
    int count;  //Cuenta llas palabras
    int i;      //Índice recorre cadena
    
    i = 0;
    count = 0;
    // i itera hasta encontrar una diferencia con c, incrementa count
    // luego  avanza i hasta el próximo delimitador o el final de s.
    while (s[i] != '\0')
    {
        if(s[i] != c)
        {
            count++;
            while (s[i] == c)
                i++;
        }
    }
    return (count);
}

static char **ft_fill_array(char **aux, char const *s, char c)
{
    size_t i;
    i = 0;//indice que recorre s.
    size_t j;//marca el inicio de la subcadena.
    int k;
    k = 0;// indice de la cadena aux.
    size_t s_len = strlen(s); //longitud de s.

    
    while(s[i])
    {
        // avanza i hasta el primer caracter que no sea c
        // marca el inicio de la subcadena con j.
        while(s[i] == c && s[i] != '\0')
            i++;
        j = i;
        //avanza i hasta el próximo delimitador o el final de s.
        while(s[i] != c && s[i] != '\0')
            i++;
        if(j >= s_len)//si j es mayor o igual a s_len, asigna '\0'  a aux[k]
            aux[k] = "\0";
        else 
            aux[k++] = ft_substr(s, j, i - j);
        //De lo contrario llama a ft_substr para almmacenar la subcadena en aux[k].
    }
    //Returna aux dentro de la subcadena.
    return  aux;
}

char **ft_split(char const *s, char c)
{
    char **aux;
    int nwords;
    
    if(!s)
        return (NULL); //Validación inicial: Verificamos que la cadena no sea NULL.
    //llamamos a ft_count_words para contar cuántas subcadenas hay en s, separadas por el delimitador c.
    nwords = ft_count_words(s, c);
    //ASIGNA MEMORIA: Asigna memoria para el array de punteros aux, que tendrás nwords + 1 elementos.
    aux = malloc((nwords + 1) * sizeof(char *));
    //verificamos que la asignación de memoria fue exitosa.
    if(aux == NULL)
        return (NULL);
    //Llama a función para llenar aux con las subcadenas.
    aux = ft_fill_array(aux, s, c);
    //aseguramos que el último elemento de aux sea NULL.
    aux[nwords] = NULL;
    return (aux);
}

// #include <stdio.h>
// #include <stdlib.h>

// // Prototipo de la función ft_split
// char **ft_split(char const *s, char c);

// int main(void) {
//     char str[] = "Hola,esto,es,una,prueba";
//     char delimitador = ',';
//     char **resultado;
//     int i = 0;

//     resultado = ft_split(str, delimitador);
//     if (resultado == NULL) {
//         printf("Error en la reserva de memoria.\n");
//         return 1;
//     }
//     while (resultado[i]) {
//         printf("Parte %d: '%s'\n", i, resultado[i]);
//         free(resultado[i]);
//         i++;
//     }
//     free(resultado);
    
//     return 0;
// }
