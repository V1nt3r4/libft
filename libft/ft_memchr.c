/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:15:40 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 05:46:12 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    const unsigned char *ptr = (const unsigned char *)s;

    while(i < n)
    {
        if(ptr[i] == (unsigned char)c)
            return ((void *)(ptr +1));
        i++;
    }
    return (NULL);
}