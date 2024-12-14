# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/14 09:24:33 by helkhouj          #+#    #+#              #
#    Updated: 2024/12/14 09:38:55 by helkhouj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_putchar.c ft_putstr.c handle_char.c handle_hex.c handle_int.c \
		handle_ptr.c handle_str.c handle_unsigned.c process_format.c \
		ft_itoi_base.c ft_printf.c ft_strdup.c ft_itoi.c ft_strlen.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

