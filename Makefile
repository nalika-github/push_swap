# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 15:30:08 by ptungbun          #+#    #+#              #
#    Updated: 2023/04/03 20:06:35 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

# Variable declaration of directory
INCS_DIR	=	./includes
BUILD_DIR	=	./build
SRC_DIR		=	./srcs

# Variable declaration of file

SRCS		=	main.c ps_3sort.c ps_5sort.c ps_100sort.c ps_500sort.c ps_action_a.c ps_action_b.c \
				ps_argvtosplit.c ps_chunk_pull.c ps_chunk_push.c ps_chunk_util.c ps_do_sort.c \
				ps_doins.c ps_inlo.c ps_iserror.c ps_issorted.c ps_maxloca.c ps_minloca.c ps_pushlogic.c \
				ps_stk_set.c ps_free.c

OBJS		=	$(SRCS:%.c=$(BUILD_DIR)/%.o)

# Variable declaration of linking lib

LIBFT		=	./libft/libft.a

LIBLINK		=	-L./libft -lft

all: $(NAME)

# Build step for C source

$(NAME): $(OBJS) $(LIBFT) $(LIBFTPRINTF)
	$(CC) $(CFLAGS) $(OBJS) -I./includes -L./libft -lft -o $(NAME)

$(OBJS): $(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I$(INCS_DIR) -I./libft -c $< -o $@

$(LIBFT):
	make -C libft

bonus: all

clean:
	rm -rf $(BUILD_DIR)

fclean:
	rm -rf $(NAME) $(BUILD_DIR)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re
