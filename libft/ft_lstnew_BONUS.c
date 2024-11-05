/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_BONUS.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:12:21 by ari               #+#    #+#             */
/*   Updated: 2024/11/04 23:19:00 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *nodo;

    nodo = malloc(sizeof(t_list));
        if(!nodo)
            return(NULL);
    nodo->content = content;
    nodo->next = NULL;
    return(nodo);
}