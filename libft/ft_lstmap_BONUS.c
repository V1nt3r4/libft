/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_BONUS.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:02:46 by ari               #+#    #+#             */
/*   Updated: 2024/11/05 02:14:55 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list = NULL;
    t_list  *new_node;
    void    *new_content;

    while (lst)
    {
        new_content = f(lst->content);
        new_node = ft_lstnew(new_content);
        
        if (!new_node){
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        
        ft_lstadd_back(&new_list, new_node);
        
        lst = lst->next;
    }
    return (new_list);
}