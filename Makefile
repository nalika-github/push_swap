# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 15:30:08 by ptungbun          #+#    #+#              #
#    Updated: 2023/02/14 11:02:01 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
HEADER		=	push_swap.h

BUILD_DIR	=	./build
SRCS_DIR	=	./srcs
INS_DIR		=	./includes

SRCS		=
OBJS		=	$(SRCS:%.c = $(BUILD_DIR)/%.o)
LIBLINK		=	-L../libft
INCSLINK	=	-I $(INS_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(LIBLINK) $(OBJS) -o $(NAME)

$(OBJS): $(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCSLINK) -c $< -o $@

bonus: all

clean:
	@rm -rf $(BUILD_DIR)

fclean:
	@rm -rf $(NAME) $(BUILD_DIR)

re: fclean all

.PHONY: all clean fclean re
