# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/13 16:19:24 by bMicheal          #+#    #+#              #
#    Updated: 2020/10/13 16:19:24 by bMicheal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.phony: all clean fclean re bonus

NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

HEADER		= -I .

SRCS		= ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memccpy.c\
	ft_memmove.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strlen.c\
	ft_strdup.c\
	ft_strcpy.c\
	ft_strncpy.c\
	ft_strcat.c\
	ft_strncat.c\
	ft_strlcat.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strstr.c\
	ft_strnstr.c\
	ft_strcmp.c\
	ft_strncmp.c\
	ft_atoi.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_memalloc.c\
	ft_memdel.c\
	ft_strnew.c\
	ft_strdel.c\
	ft_strclr.c\
	ft_striter.c\
	ft_striteri.c\
	ft_strmap.c\
	ft_strmapi.c\
	ft_strequ.c\
	ft_strnequ.c\
	ft_strsub.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_strsplit.c\
	ft_itoa.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putendl.c\
	ft_putnbr.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
BONUS		 = ft_lstnew.c ft_lstdelone.c ft_lstadd_front.c ft_lstclear.c \
			ft_lstiter.c ft_lstmap.c ft_lstsplit.c ft_lstlast.c \
			ft_lstsize.c ft_lstadd_back.c

OBJS		= ${SRCS:.c=.o}

OBJS_BONUS	= ${BONUS:.c=.o}

.c.o:
			@${CC} ${CFLAGS} ${HEADER} -c $< -o ${<:.c=.o}
			@echo "compilation : "$< "\033[32mok\033[0m"

all:		${NAME}

$(NAME):	${OBJS}
			@echo "██      ██ ██████  ███████ ████████"
			@echo "██      ██ ██   ██ ██         ██   "
			@echo "██      ██ ██████  █████      ██   " 
			@echo "██      ██ ██   ██ ██         ██   "
			@echo "███████ ██ ██████  ██         ██   " 
			
			@ar rc ${NAME} ${OBJS}
			@ranlib ${NAME}

bonus:		${OBJS} ${OBJS_BONUS}
			@echo "----------- \033[32m Avec Bonus Terminé\033[0m -----------"
			@echo "\n\033[32m"
			@echo "██      ██ ██████  ███████ ████████     ██████   ██████  ███    ██ ██    ██ ███████ "
			@echo "██      ██ ██   ██ ██         ██        ██   ██ ██    ██ ████   ██ ██    ██ ██      "
			@echo "██      ██ ██████  █████      ██        ██████  ██    ██ ██ ██  ██ ██    ██ ███████ " 
			@echo "██      ██ ██   ██ ██         ██        ██   ██ ██    ██ ██  ██ ██ ██    ██      ██ "
			@echo "███████ ██ ██████  ██         ██        ██████   ██████  ██   ████  ██████  ███████ " 
			@ar rc ${NAME} ${OBJS} ${OBJS_BONUS}
			@echo "\033[0m\nCréation de la librairie avec les Bonus... \033[32mok\033[0m"
			@ranlib ${NAME}
			@echo "Optimisation ... \033[32mok\033[0m"
			@echo "\033[1;31;40m -------------- TERMINÉ ---------------\033[0m"

clean:	
			@rm -f ${OBJS} ${OBJS_BONUS}
			@echo "\n\033[32m"
			@echo " ██████ ██      ███████  █████  ███    ██"
			@echo "██      ██      ██      ██   ██ ████   ██"
			@echo "██      ██      █████   ███████ ██ ██  ██"
			@echo "██      ██      ██      ██   ██ ██  ██ ██"
			@echo " ██████ ███████ ███████ ██   ██ ██   ████"
			@echo "\033[0m\nSuppression fichiers *.o  ... \033[32mok\033[0m"

fclean:		clean
			@rm -f ${NAME}
			@echo "\033[0mSuppression "${NAME}" ... \033[32mok\033[0m"
			@rm -f test
			
re:			fclean	all

test:		libft.a
			@${CC} ${HEADER} -L. -O ../unit_test/main.c  ../unit_test/unit_test.c -o test -lft -lbsd

so:			
			gcc -o libft.so -shared *.o