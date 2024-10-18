/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:18:21 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/15 00:58:59 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	str;
	size_t			i;

	ptr = (unsigned char *)b;
	str = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ptr[i] = str;
		i++;
	}
	return (b);
}
// //  int main() {
//     char arr[10];
//     //Rellea los primeros 10 bytes del array ccon el valor 'A'
//     ft_memset(arr, 'a', sizeoff(arr));
//     //Imprime eel contenido del array
//     for(int i = 0; i < 10; i++) {
//         printf("%c", arr[i]);
//     }
//     return (0);
//  }
//  */