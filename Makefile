# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/26 17:44:45 by lsilva-q          #+#    #+#              #
#    Updated: 2022/07/05 16:54:31 by lsilva-q         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= intlist.a

CC				= gcc
CFLAGS			= -Wall -Werror -Wextra
AR				= ar rcs

SRCS_DIR		= srcs
OBJS_DIR		= objs

SRC_FILES		= intlst_init.c		intnode_new.c		intlst_getindex.c	\
				intlst_push_back.c	intlst_push_front.c	intlst_push.c		\
				intlst_pop.c		intlst_pop_node.c	intlst_getnode.c	\
				intlst_print.c		intlst_pop.c		intlst_pop_front.c	\
				intlst_pop_back.c	intnode_free.c		intlst_clear.c		\
				intlst_swap_node.c

SRCS			= $(addprefix $(SRCS_DIR)/, $(SRC_FILES))
OBJS			= $(addprefix $(OBJS_DIR)/, $(SRC_FILES:%.c=%.o))

HEADER			= intlist.h

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(HEADER)
				mkdir -p $(OBJS_DIR)
				$(CC) $(CFLAGS) -I ./ -c $< -o $@

clean:
				$(RM) $(OBJS)
				$(RM) -rf $(OBJS_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
