# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 19:58:00 by liglesia          #+#    #+#              #
#    Updated: 2022/07/20 18:06:15 by liglesia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# https://www.youtube.com/watch?v=Dtn7kBtaKBM&list=PLMa9fq02Eqo-6-LRcDQ786lRYi7W3bW9i&index=3
NAME = 	libft.a

SRCS =  ft_bzero.c isalpha.c isdigit.c isalnum.c isascii.c isprint.c strlen.c memset.c bzero.c memcpy.c memmove.c strlcpy.c 

OBJS = ${SRCS:.c =.o}

BONUS = #

BONUS_OBJS = #

CFLAGS = -Wall -Wextra -Werror

CC = gcc

.c.o:
	@${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

RM = rm -f

${NAME}: ${OBJS}
		ar -rc $(NAME) $(OBJS) 
			

all:	${NAME}

bonus:			$(OBJS) $(BONUS_OBJS)
				ar -rc $(NAME) $(OBJS) $(BONUS_OBJS)
				
clean:	${OBJS}

fclean:		clean
			${RM} ${NAME}

re: fclean ${NAME}

.PHONY: clean fclean re all bonus