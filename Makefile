# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkok <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/12 19:16:20 by mkok              #+#    #+#              #
#    Updated: 2017/02/10 17:00:33 by ssalaues         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = \
		rtet.c				\
		validatechars.c		\
		validateshape.c		\
		addtomap.c			\
		mapmaker.c			\
		freemap.c			\
		trimtetro.c			\
		trimall.c			\
		printtetros.c		\
		main.c				\
		put_alpha.c			\
		piececount.c		\
		printmap.c			\
		solver.c			\
		addallpieces.c		\
		allpiecesused.c		\
		doesitfit.c			\
		ft_sqrt_ceil.c		\
		moveback.c			\
		moveforward.c		\
		clearmap.c

all: $(NAME)

$(NAME): lib
	@cd srcs && gcc -Wall -Wextra -Werror -c $(SRCS)
	@cd srcs && gcc -L../libft -lft $(SRCS:.c=.o) -o ../$(NAME)

lib:
	@cd libft && make

clean:
	@cd libft && make clean
	@echo " Cleaning Fillit"
	@cd srcs && /bin/rm -f $(SRCS:.c=.o)
	@echo " Done\n"

fclean: clean
	@echo " fCleaning Fillit"
	@/bin/rm -f $(NAME)
	@echo " Done\n"
	@cd libft && make fclean

re: fclean all
