# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avarnier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/11 13:14:39 by avarnier          #+#    #+#              #
#    Updated: 2020/03/11 13:18:26 by avarnier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

INC = ft_printf.h

FCT = 	ft_atoi.c\
		ft_isdigit.c\
		ft_printf.h\
		ft_putnbr_fd.c\
		ft_strlen.c\
		get_param.c\
		nbrlen.c\
		ft_isalpha.c\
		ft_printf.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		get_len.c\
		get_ret.c\
		print_arg.c\

OBJ = $(addsuffix .o, $(basename $(FCT)))

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c $(INC)
	$(CC) -c -o $@ $< $(FLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
