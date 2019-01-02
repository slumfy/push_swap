# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 19:05:19 by rvalenti          #+#    #+#              #
#    Updated: 2019/01/02 10:52:19 by rvalenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=		ft_median.c					\
					ft_arg.c					\
					ft_op.c						\
					ft_pushed_op.c				\
					ft_rev_rot_op.c				\
					ft_rev_rot_pushed_op.c		\
					ft_rotate_op.c				\
					ft_rotate_pushed_op.c		\
					ft_stack.c					\
					ft_error.c					\
					ft_init.c					\
					ft_quick_sort.c				\
					ft_insert_sort.c			\
					ft_spec_sort.c				\
					ft_print_inst.c				\
					ft_ifsort.c					\
					ft_push_swap.c
LIBFT		=		../libft/
OBJ			=		$(SRCS:.c=.o)
CC			=		gcc -Wall -Wextra -Werror
NAME		=		push_swap
.PHONY		=		all $(NAME) $(OBJ) clean fclean re

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) -I $(LIBFT) -I includes/ -L $(LIBFT) -lft
%.o: %.c
	@$(CC) -I $(LIBFT) -I . -c $< -o $@
	@/bin/echo -n "#"
clean:
	@rm -rf $(OBJ)
	@make clean -C $(LIBFT)

fclean:	clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT)

re:	fclean all
