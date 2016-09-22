# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroche <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/17 16:36:19 by aroche            #+#    #+#              #
#    Updated: 2016/09/18 19:30:24 by aroche           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = ft_aff.c ft_check.c ft_check_line.c ft_nblines.c ft_nbrows.c ft_put.c \
	  ft_putnbr.c ft_recup.c ft_strdup.c ft_strjoin.c ft_strlen.c main.c

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: fclean all
