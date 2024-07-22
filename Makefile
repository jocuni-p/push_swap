# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocuni-p <jocuni-p@student.42barcelona.com +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 16:15:05 by jocuni-p          #+#    #+#              #
#    Updated: 2024/07/22 18:29:15 by jocuni-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra -g #-fsanitize=address

NAME = push_swap

SRC = main.c \
		my_atoi.c \
		ft_err.c \
		cleaner.c \
		new_node.c \
		add_back.c \
		add_front.c \
		check_dup.c \
		check_order.c \
		min.c max.c \
		last.c size.c \
		swap.c rotate.c \
		push.c \
		rev_rotate.c \
		select_alg.c \
		sort_3.c \
		sort_4.c \
		sort_5.c \
		sort_many.c \
		find_pos.c \
		mov_calculator.c \
		mov_exe.c \
		mov_optimize.c \
		init_t_move.c \
		set_b.c \
		print_lst.c

OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

DEPS = $(SRC:.c=.d)

#-------------------REGLAS----------------#

all: makelib $(OBJ_DIR) $(NAME)

-include $(DEPS)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) libft/libft.a -o $(NAME) $(OBJ)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

makelib:
	$(MAKE) -C libft/

$(OBJ_DIR)/%.o : %.c  Makefile push_swap.h
	$(CC) -c $(CFLAGS) -MMD -MP -MF $(OBJ_DIR)/$*.d $< -o $@

clean:
	$(MAKE) -C libft clean
	rm -f -r $(OBJ_DIR)

fclean: clean
	$(MAKE) -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

