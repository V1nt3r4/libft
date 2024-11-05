# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ari <ari@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 22:58:15 by ari               #+#    #+#              #
#    Updated: 2024/11/05 23:00:11 by ari              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ==========================================================
# =                     VARIABLES SECTION                   =
# ==========================================================
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
RM = rm -f

# ==========================================================
# =                     SOURCES SECTION                     =
# ==========================================================
SRCS =  ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_strlen.c \
        ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memmove.c \
        ft_strlcpy.c \
        ft_strlcat.c \
        ft_tolower.c \
        ft_toupper.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strncmp.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strnstr.c \
        ft_atoi.c \
        ft_calloc.c \
        ft_strdup.c \
        ft_substr.c \
        ft_strjoin.c \
        ft_strtrim.c \
        ft_split.c \
        ft_itoa.c \
        ft_strmapi.c \
        ft_striteri.c \
        ft_putchar_fd.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c \
        ft_putstr_fd.c \

BSRC =  ft_lstnew_BONUS.c \
        ft_lstadd_front_BONUS.c \
        ft_lstsize_BONUS.c \
        ft_lstlast_BONUS.c \
        ft_lstadd_back_BONUS.c \
        ft_lstdelone_BONUS.c \
        ft_lstclear_BONUS.c \
        ft_lstiter_BONUS.c \
        ft_lstmap_BONUS.c \

OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRC:.c=.o)

# ==========================================================
# =                     RULES SECTION                       =
# ==========================================================
all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[32mCompiling object files...\033[0m"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "\033[1;32mLibrary created: $(NAME)\033[0m"

bonus: $(BOBJS)
	@echo "\033[32mCompiling bonus files...\033[0m"
	@$(AR) $(ARFLAGS) $(NAME) $(BOBJS)
	@echo "\033[1;32mBonus Library created: $(NAME)\033[0m"

%.o: %.c
	@echo "\033[34mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "\033[31mCleaning up object files...\033[0m"
	@$(RM) $(OBJS) $(BOBJS)

fclean: clean
	@echo "\033[31mRemoving library...\033[0m"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
