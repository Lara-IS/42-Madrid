# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 19:58:00 by liglesia          #+#    #+#              #
#    Updated: 2022/07/29 17:59:57 by liglesia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = 	libft.a

SRCS =   ft_tolower.c ft_toupper.c
# ft_atoi.c ft_memchr.c 
# ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strlcat.c ft_strlcpy.c  ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c */

OBJS = ${SRCS:.c=.o}

# BONUS = #

# BONUS_OBJS = #

CC = gcc 

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar -rc

#Crear librería & CC:
${NAME}: ${OBJS}
		${AR} ${NAME} ${OBJS}
		${CC} ${CFLAGS} ${OBJS} 
		
all:	${NAME}

#bonus:	$(OBJS) $(BONUS_OBJS)
#		${CC} ${CFLAGS} ${NAME} ${OBJS} ${BONUS_OBJS}
				
clean:	
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re: fclean all

.PHONY: clean fclean re all bonus

# https://www.youtube.com/watch?v=Dtn7kBtaKBM&list=PLMa9fq02Eqo-6-LRcDQ786lRYi7W3bW9i&index=3