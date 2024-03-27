# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 14:03:24 by kkonkel           #+#    #+#              #
#    Updated: 2024/03/27 09:37:31 by kkonkel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
LIBFT_DIR = best_libft
C_FLAGS = -Wextra -Werror -Wall -g

SRC = take_args.c doubly_linked.c

OBJ = $(SRC:.c=.o)

all: $(LIBFT_DIR)/libft.a $(NAME)

$(NAME): $(OBJ) $(LIBFT_DIR)/libft.a
		cc $(C_FLAGS) $(OBJ) -L$(LIBFT_DIR) -lft -o $@

$(LIBFT_DIR)/libft.a: $(LIBFT_DIR)/*.c
	$(MAKE) -C $(LIBFT_DIR) all

%.o: %.c
	cc $(C_FLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: clean all

run: all 
	cc $(C_FLAGS) main.c -o a.out libft.a
	./a.out

.PHONY: all clean fclean re bonus