/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 01:56:55 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 03:03:08 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
static int get_num_length(int n) {
    int length = 0;
    if (n <= 0) {
        length = 1;
    } else {
        length = 0;
    }
    while (n != 0) {
        length++;
        n /= 10;
    }
    return length;
}

char *ft_itoa(int n) {
    int len = get_num_length(n);
    char *str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';

    if (n == 0) {
        str[0] = '0';
        return (str);
    }

    int is_negative = 0;
    if (n < 0) {
        is_negative = 1;
        str[0] = '-';
        n = -n;
    }

    while (n != 0) {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }

    if (is_negative) {
        str[0] = '-';
    }

    return str;
}








// Prototipo de la función ft_itoa
char *ft_itoa(int n);

int main(void) {
    int n = -421;
    char *str;

    str = ft_itoa(n);
    if (str) {
        printf("El número %d convertido a string es: '%s'\n", n, str);
        free(str);
    } else {
        printf("Error al convertir el número %d\n", n);
    }

    return 0;
}
