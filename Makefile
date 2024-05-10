# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 09:30:05 by cparodi           #+#    #+#              #
#    Updated: 2024/05/10 14:28:46 by cparodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = 	ft_printf.c \
			ft_putnbr_u_fd.c \
			ft_parsing_format.c \
			ft_make_c.c \
			ft_make_s.c \
			ft_make_d.c \
			ft_make_u.c \
			ft_make_percent.c

NAME    = libftprintf.a

OBJS    = ${SRCS:.c=.o}

LIBC    = ar rc

CC      = gcc

RM      = rm -f

CFLAGS  = -Wall -Wextra -Werror

EXEC    = make

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	@make -C ./libft
	cp libft/libft.a ${NAME}
	${LIBC} ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME} ${EXEC}

${EXEC}: ${OBJS}
	${CC} -o ${EXEC} ${OBJS}

clean:
	@make clean -C ./libft
	${RM} ${OBJS} ${EXEC}

fclean: clean
	@make fclean -C ./libft
	${RM} ${NAME} ${EXEC}

re: fclean all

run:
	./${EXEC}

.PHONY: all clean fclean re run
