# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/07 20:21:26 by dkondysi          #+#    #+#              #
#    Updated: 2026/02/27 16:41:36 by dkondysi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME        := libftprintf.a

CC          := gcc
CFLAGS      := -Wall -Wextra -Werror
AR          := ar
ARFLAGS     := rcs
RM          := rm -rf

INCLUDE     := include
LIBFT       := libft
SRC_DIR     := source
OBJ_DIR     := obj

INC_FLAGS   := -I$(INCLUDE) -I$(LIBFT)

SRC_FILES	:= ft_printf ft_printf_utils ft_print_ptr ft_print_unsigned ft_print_hex
SRC			:= $(addprefix $(SRC_DIR)/, $(addsuffix .c, $(SRC_FILES)))
OBJ			:= $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(SRC_FILES)))

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C $(LIBFT)
	@cp $(LIBFT)/libft.a .
	@mv libft.a $(NAME)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	@printf "%s\n" "ft_printf compiled!"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INC_FLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) $(OBJ_DIR)
	@$(MAKE) clean -C $(LIBFT)
	@printf "%s\n" "ft_printf object files cleaned!"

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT)/libft.a
	@printf "%s\n" "ft_printf executable files cleaned!"
	@printf "%s\n" "libft executable files cleaned!"

re: fclean all

norm:
	@norminette $(SRC) $(INCLUDE) $(LIBFT) | grep -v Norme -B1 || true

.PHONY: all clean fclean re norm
