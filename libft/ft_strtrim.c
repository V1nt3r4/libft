/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 02:30:30 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 12:42:21 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len_s1;
	const char	*first;
	const char	*last;
	char		*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	first = s1;
	last = s1 + len_s1 - 1;
	while (first <= last && is_in_set(*first, set))
		first++;
	while (last >= first && is_in_set(*last, set))
		last--;
	trimmed_str = ft_substr(first, 0, last - first + 1);
	return (trimmed_str);
}
