# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/30 00:46:54 by rvalenti          #+#    #+#              #
#    Updated: 2019/01/02 16:49:31 by rvalenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

UNDER=$'\x1b[4m$'
RED=$'\x1b[31m$'
GREEN=$'\x1b[32m$'
YELLOW=$'\x1b[33m$'
WHITE=$'\x1b[37m$'
END=$'\x1b[0m$'
NAME = push_swap_proj

all:	$(NAME)

$(NAME):
	@echo "$(UNDER)Compiling libft :$(END)\t\t$(YELLOW)gcc -Wall -Wextra -Werror$(WHITE)\n"
	@make -C libft/
	@echo "$(UNDER)Compiling push_swap :$(END)\t\t$(YELLOW)gcc -Wall -Wextra -Werror$(WHITE)\n"
	@make -C push_swap_dir/
	@echo "$(UNDER)Compiling checker :$(END)\t\t$(YELLOW)gcc -Wall -Wextra -Werror$(WHITE)\n"
	@make -C checker_dir/
	cp push_swap_dir/push_swap .
	cp checker_dir/checker .

clean:
	make clean -C push_swap_dir/
	make clean -C checker_dir/

fclean: clean
	make fclean -C push_swap_dir/
	make fclean -C checker_dir/
	rm -f push_swap
	rm -f checker

re: fclean all
