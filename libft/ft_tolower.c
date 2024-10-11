/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:55:51 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/03 23:34:11 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }
    return (c); 
}

// #include <ctype.h>
// #include <stdio.h>

// int main() {
//     char c = 'l';
//     char lower = ft_tolower(c);
//     printf("El carácter en minúscula es: %c\n", lower);
//     return 0;
// }

