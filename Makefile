# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/24 17:02:18 by helkhouj          #+#    #+#              #
#    Updated: 2024/12/24 18:15:47 by helkhouj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_itoa_base.c ft_putchar.c ft_putstr.c ft_putnbr.c handle_char.c handle_hex.c handle_int.c handle_ptr.c handle_str.c handle_unsigned.c process_format.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
