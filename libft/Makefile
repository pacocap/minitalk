# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/04 14:14:08 by fcanadas          #+#    #+#              #
#    Updated: 2020/10/17 22:33:54 by fcanadas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SONAME = libft.so
CC = gcc
FLAGS = -Wall -Wextra -Werror -I. -c
FILES =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

FILES_BONUS =	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \

OBJ = $(FILES:%.c=%.o)

OBJ_BONUS = $(FILES_BONUS:%.c=%.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(FLAGS) $(FILES)

all: $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
	rm -f $(OBJ_BONUS)
	rm -f $(SONAME)
re: fclean all

so:
	gcc -Wall -Wextra -Werror -shared -o $(SONAME) -fPIC $(FILES)

bonus: $(OBJ) $(OBJ_BONUS)
		ar rcs $(NAME) $(NAME_BONUS) $(OBJ) $(OBJ_BONUS)

.PHONY: all clean fclean re so
