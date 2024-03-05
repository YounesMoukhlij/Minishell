# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 12:51:20 by youmoukh          #+#    #+#              #
#    Updated: 2024/03/02 14:20:11 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c \
	  parsing.c \
	  functions.c \
	  minishell_functions.c \

OBJ = ${SRC:.c=.o}
CFLAGS = -Wall -Wextra -Werror 
NAME = minishell

all : ${NAME} clean execute

execute :
	@./minishell

%.o : %.c minishell.h
	@cc ${CFLAGS} -c $< -o $@

${NAME} : ${OBJ}
	@cc ${OBJ} -lreadline -o $@

norm :
	@norminette

clean :
	@rm -rf ${OBJ}

fclean : clean
	@rm -rf ${NAME}

.PHONY : clean norm
