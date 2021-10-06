# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: urycherd <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 15:01:31 by urycherd          #+#    #+#              #
#    Updated: 2021/10/05 15:02:00 by urycherd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

CC = gcc

FLAG = -Wall -Wextra -Werror

RM = rm -f

OBJS = ${SRCS:.c = .o}

.c.o:
		gcc ${FLAG} - c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}
		 ${CC} -o ${NAME} ${OBJS} -L. -lft

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all