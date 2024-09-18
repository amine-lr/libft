# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarioui <mlarioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 10:47:04 by mlarioui          #+#    #+#              #
#    Updated: 2024/09/18 12:09:00 by mlarioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextr -Werror

AR = ar rc
RM = rm -f

SRC = ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strdup.c ft_strchr.c ft_strrchr.c \
		ft_toupper.c ft_tolower.c ft_memset.c ft_memmove.c ft_memcpy.c ft_memcmp.c \
		ft_isdigit.c ft_isacii.c ft_isalpha.c ft_isalnum.c ft_calloc.c ft_bzero.c ft_atoi.c \
		ft_strnstr.c ft_strncmp.c ft_memchr.c ft_isprint.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c

OBJ = $(SRC: .c=.o)
# ******************************************************************************************* #

all: $(NAME)

$(NAME): $(OBJ)
				$(AR) $(NAME) $(OBJ)
c.o:
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ) $(OBJ_B)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re				