# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 15:30:08 by ptungbun          #+#    #+#              #
#    Updated: 2023/03/03 11:45:01 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	gcc
CFLAGS		=

# Variable declaration of directory
INCS_DIR	=	./includes
BUILD_DIR	=	./build
SRC_DIR		=	./srcs

# Variable declaration of file

SRCS		=	main.c ps_stk_set.c ps_data_error.c ps_input_error.c ps_do_sorce.c \
				ps_action_a.c ps_action_b.c ps_inlo.c ps_maxloca.c ps_minloca.c ps_issorced.c \
				ps_3sorce.c ps_5sorce.c ps_100sorce.c ps_doedge.c ps_chunk_push.c ps_chunk_pull.c

OBJS		=	$(SRCS:%.c=$(BUILD_DIR)/%.o)

# Variable declaration of linking lib

LIBFT		=	./libft/libft.a

LIBFTPRINTF	=	./ft_printf/libftprintf.a

LIBLINK		=	-Llibft -lft -Lft_printf -lftprintf

all: $(NAME)

# Build step for C source

$(NAME): $(OBJS) $(LIBFT) $(LIBFTPRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LIBLINK) -o $(NAME)

$(OBJS): $(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I $(INCS_DIR) -I ./libft -I ./ft_printf/includes -c $< -o $@

$(LIBFT):
	make -C libft

$(LIBFTPRINTF):
	make -C ft_printf

bonus: all

clean:
	@rm -rf $(BUILD_DIR)

fclean:
	@rm -rf $(NAME) $(BUILD_DIR)

re: fclean all

test:
	$(CC) $(OBJS) $(LIBLINK) $(LIBLINK) -o $(NAME)
	@./runtest.out

norm:
	norminette -R CheckForbiddenSourceHeader $(SRC_DIR)/*c
	norminette -R CheckDefine $(INCS_DIR)/*h

.PHONY: all clean fclean re
