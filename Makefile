# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 22:53:01 by mahmad-j          #+#    #+#              #
#    Updated: 2021/05/20 17:33:05 by mahmad-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strlen.c		\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strnstr.c	\
			ft_strncmp.c	\
			ft_atoi.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	

NAME	=	libft.a

O = obj/
OBJ = $(SRC:.c=.o)
OBJINDIR = $(addprefix $(O), $(OBJ))

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

$(O)%.o :	%.c libft.h
			mkdir -p $(O)
			${CC} ${CFLAGS} -c $< -o $@

$(NAME)	:	$(OBJINDIR)
			ar -rc $(NAME) $(OBJINDIR)

.PHONY	:	all clean fclean re

all		:	$(NAME)

clean	:
			rm -rf $(O)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all