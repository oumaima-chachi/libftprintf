# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 15:18:07 by ochachi           #+#    #+#              #
#    Updated: 2024/11/13 20:56:55 by ochachi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a 
CC = cc
CFLAGS = -wall -wextra -werror

SRCS = ft_printf_utils.c ft_printf_utilsable.c
OBJS = $(SRCS:.c=o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c libftprintf.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean:
		rm -f $(NAME)

re: fclean all
