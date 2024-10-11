/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 01:09:11 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 06:16:21 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *ptr;
    size_t i;
    i = 0;
    size_t len;
    len = ft_strlen(s);

    if (!s)
        return (NULL);

    ptr = (char *)malloc(len + 1);
      if (!ptr)
        return (NULL);

    while (i < len)
   {
        ptr[i] = s[i];
        i++;
   }
    ptr[i] = '\0';

    return (ptr);
}


// int main(void)
// {
//    char *string = "this is a copy";
//    char *newstr;
//    /* Make newstr point to a duplicate of string                              */
//    if ((newstr = ft_strdup(string)) != NULL)
//       printf("The new string is: %s\n", newstr);
//    return 0;
// }