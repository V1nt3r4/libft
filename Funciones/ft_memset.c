/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:43:28 by ari               #+#    #+#             */
/*   Updated: 2024/09/25 00:55:07 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memset(void *b, int c, size_t len) {
    unsigned char *prt = b;
    while (len--) {
        *prt++ = (unsigned char)c;
    }
    return b;

    if(!b) return NULL;
}