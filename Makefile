# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 13:10:41 by ibenhaim          #+#    #+#              #
#    Updated: 2023/02/06 12:47:47 by ibenhaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
FLAGS		=	-Wall -Werror -Wextra

HEADER		=	push_swap.h
SRCS		=	push_swap.c \
				swap.c \
				push.c \
				rotate.c \
				reverse_rotate.c \
				sort.c \
				parsing.c \
				sort_three.c \
				
				
				

INCLUDES	=	includes/
DIR_SRCS	= 	srcs/
DIR_LIB		=	libft/
DIR_OBJS	=	objs/

LIBFT		=	$(DIR_LIB)libft.a

SRC 		= 	$(addprefix ${DIR_SRCS}, ${SRCS})

OBJS		= 	${SRCS:.c=.o}

LFTNAME		= 	libft.a

%.o:%.c	${HEADER} ${DIR_LIB}libft.h
				${CC} ${FLAGS} -c $< -o $@

${NAME}		: $(LIBFT) ${OBJS}
				${CC} ${FLAGS} ${OBJS} ${DIR_LIB}${LFTNAME} -o ${NAME}

all : ${NAME}

$(LIBFT)	:
				${MAKE} -C ${DIR_LIB}

clean:
				rm -f ${OBJS} 
				${MAKE} -C ${DIR_LIB} clean

fclean:	clean
				rm -f ${NAME}
				${MAKE} -C ${DIR_LIB} fclean
				
re: fclean all

.PHONY:	all clean fclean re libft