/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:52:27 by ari               #+#    #+#             */
/*   Updated: 2024/09/21 15:57:57 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBHT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct        s_list
{
        void        *content;
        size_t      content_size;
        struct s_list   *next;        
}                           t_list;

int         ft_isalpha(int c);


#endif

