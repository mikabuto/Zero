# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 15:01:31 by urycherd          #+#    #+#              #
#    Updated: 2022/01/04 15:16:33 by urycherd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = libftprintf.h

SRCS = 

SRCS_B = 

CC = cc

FLAG = -Wall -Wextra -Werror

RM = rm -f

LIBC = ar rcs

OBJS = ${SRCS:.c=.o}

OBJS_B = $(SRCS_B:.c=.o)

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} $?

${OBJS}: ${HEADER}

${OBJS_B}: ${HEADER}

.c.o:
	${CC} ${FLAG} -c $< -o $@

TMPFILE = .tempfile

bonus: ${TMPFILE}

${TMPFILE}: ${OBJS_B}
	${LIBC} ${NAME} $?
	@touch ${TMPFILE}

clean:
	${RM} ${OBJS} ${OBJS_B}
	@${RM} ${TMPFILE}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean bonus re