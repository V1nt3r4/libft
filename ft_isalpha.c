/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:32:01 by ari               #+#    #+#             */
/*   Updated: 2024/09/21 15:38:39 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c) 
{
    if(c <= 97 && >= 122) {
        return 1;
    }

    return 0;
}

// La función devuelve un valor distinto de cero si el caracter
// pasa el parámetro.