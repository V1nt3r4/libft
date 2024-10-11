/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 01:23:07 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 03:20:13 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    size_t i;
    i = 0;
    
    while(i < n) {
        d[i] = s[i];
        i++;
    }
    return ((void *)dest);
}