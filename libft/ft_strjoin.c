/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:41:11 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 06:25:23 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *ptr;
    int i = -1;
    int j = -1;

    ptr = (char *)malloc(ft_strlen(s1) + (ft_strlen(s2) + 1));
    if(!ptr)
        return (NULL);
    while (s1[++i])
        ptr[i] = s1[i];
    while (s2[++j])
        ptr[i + j] = s2[j];
    ptr[i + j] = '\0';
    return (ptr);
}