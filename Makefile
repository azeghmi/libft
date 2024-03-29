# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/10 14:10:15 by azeghmi           #+#    #+#              #
#    Updated: 2018/11/10 14:10:18 by azeghmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libft.a

SRCS=	ft_memset.c									\
		ft_bzero.c 									\
		ft_memcpy.c									\
		ft_memmove.c 								\
		ft_memchr.c 								\
		ft_memcmp.c 								\
		ft_strlen.c 								\
		ft_strdup.c 								\
		ft_strcpy.c 								\
		ft_strncpy.c 								\
		ft_strcat.c 								\
		ft_strncat.c 								\
		ft_strlcat.c 								\
		ft_strchr.c 								\
		ft_strrchr.c 								\
		ft_strstr.c 								\
		ft_strnstr.c 								\
		ft_strncmp.c 								\
		ft_strcmp.c       							\
		ft_atoi.c 									\
		ft_isalpha.c  								\
		ft_isdigit.c 								\
		ft_isalnum.c 								\
		ft_isascii.c 								\
		ft_isprint.c 								\
		ft_toupper.c 								\
		ft_tolower.c 								\
		ft_memalloc.c 								\
		ft_memccpy.c 								\
		ft_memdel.c 								\
		ft_strdel.c 								\
		ft_strclr.c 								\
		ft_striter.c 								\
		ft_striteri.c								\
		ft_strmap.c 								\
		ft_strmapi.c 								\
		ft_strequ.c									\
		ft_strnequ.c 								\
		ft_strsub.c									\
		ft_putchar.c 								\
		ft_putstr.c 								\
		ft_putendl.c 								\
		ft_putnbr.c 								\
		ft_putchar_fd.c 							\
		ft_putstr_fd.c 								\
		ft_putendl_fd.c 							\
		ft_putnbr_fd.c 								\
		ft_strjoin.c 								\
		ft_strtrim.c 								\
		ft_strnew.c 								\
		ft_itoa.c 									\
		ft_strsplit.c 								\
		ft_lstnew.c 								\
		ft_lstdelone.c 								\
		ft_lstdel.c 								\
		ft_lstiter.c 								\
		ft_lstadd.c 								\
		ft_lstmap.c 								\
		ft_strndup.c 								\
		ft_strnjoin.c 								 	

HEAD=	libft.h

CFLAGS=	-Wall										\
		-Wextra										\
		-Werror										

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -c $(SRCS)
	@ar rc -s $@ $(OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
