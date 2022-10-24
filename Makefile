# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 14:34:11 by hoigag            #+#    #+#              #
#    Updated: 2022/10/23 12:24:11 by hoigag           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_printf.c ft_strlen.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_putunbr.c ft_puthex_long.c
OBJS = $(SRCS:.c=.o)

all: $(NAME) 

$(NAME): $(OBJS)
	ar -rcs $@ $^ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all