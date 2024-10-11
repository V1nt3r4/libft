/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 23:30:09 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/03 23:41:45 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int   ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    return (c);
}
// #include <ctype.h>
// #include <stdio.h>

// int main() {
//     char c = 'p';
//     char lower = ft_toupper(c);
//     printf("El carácter en minúscula es: %c\n", lower);
//     return 0;
// }