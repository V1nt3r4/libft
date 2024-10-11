# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarcos <aarcos@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 00:53:56 by aarcos            #+#    #+#              #
#    Updated: 2024/10/11 08:40:30 by aarcos           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c #ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c
#BSRC = ft_lstnew.c etc
OBJS = $(SRCS:.c=.o)
#BOBJS = $(BSRC:.c=.o)
RM = rm -f

# RULES

all: $(NAME)

$(NAME): $(OBJS) # $(BOBJS)
	$(AR) $(ARFLAGS) -o $(NAME) $(OBJS) # $(BOBJS) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) # $(BOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# bonus: $(OBJS) archivo_bonus.o
#     $(CC) $(CFLAGS) -o $(NAME) $(OBJS) archivo_bonus.o


.PHONY: all clean fclean re bonus