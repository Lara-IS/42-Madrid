# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liglesia <liglesia@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 19:58:00 by liglesia          #+#    #+#              #
#    Updated: 2022/04/29 16:22:37 by liglesia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# https://www.youtube.com/watch?v=Dtn7kBtaKBM&list=PLMa9fq02Eqo-6-LRcDQ786lRYi7W3bW9i&index=3
NAME = 	libft.a

SRCS =  ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c 	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_tolower.c ft_toupper.c

OBJS = ${SRCS:.c =.o}

BONUS = #

BONUS_OBJS = #

CFLAGS = -Wall -Wextra -Werror

CC = gcc

.c:.o:	${CC} ${CFLAGS} -c &< -o ${<:.c:.o}

RM = rm -f

${NAME}		
			${OBJS}
			${CC} ${NAME} ${OBJS} -include ${CFLAGS}
			ar rcs $(NAME) $(OBJS) 
			

all:	${NAME}

bonus:			$(OBJS) $(BONUS_OBJS)
				# ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
clean:
 			${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re: fclean ${NAME}

.PHONY: clean fclean re all bonus