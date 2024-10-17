/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 05:48:38 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/15 22:48:15 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	*free_memory(char **str, int k)
{
	while (k >= 0)
	{
		free(str[k]);
		k--;
	}
	free(str);
	return (NULL);
}

static int	word_length(const char *s, char c, int i)
{
	int	j;

	j = i;
	while (s[j] != c && s[j] != '\0')
		j++;
	return (j);
}

static char	**split_words(char **str, const char *s, char c)
{
	int	i;
	int	k;
	int	j;
	int	l;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			j = word_length(s, c, i);
			str[k] = (char *)malloc((j - i + 1) * sizeof(char));
			if (!str[k])
				return (free_memory(str, k));
			l = 0;
			while (i < j)
				str[k][l++] = s[i++];
			str[k++][l] = '\0';
		}
	}
	str[k] = NULL;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		num_words;

	if (!s)
		return (NULL);
	num_words = word_count(s, c);
	str = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str = split_words(str, s, c);
	return (str);
}
