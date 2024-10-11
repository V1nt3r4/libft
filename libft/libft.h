/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 02:50:01 by aarcos            #+#    #+#             */
/*   Updated: 2024/10/11 06:03:52 by aarcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H


# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

char    *ft_strnstr(const char *big, const char *little, size_t len);
int     ft_atoi(const char *nptr);
int     ft_isalnumm(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    ft_memset(void *b, int c, size_t len);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlen(const char *str);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlen(const char *str);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_strcmp(const char *s1, const char *s2);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_tolower(int c);
int     ft_toupper(int c);
void    *ft_calloc(size_t nmemb, size_t size);
char    *ft_strdup(const char *s);
void    ft_bzero(void *d, size_t len);
void    *ft_memcpy(void *dest, const void *src, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
char    *ft_strdup(const char *s);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);

#endif 
