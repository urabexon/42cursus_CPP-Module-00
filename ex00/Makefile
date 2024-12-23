# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/22 19:32:35 by hurabe            #+#    #+#              #
#    Updated: 2024/12/24 04:57:46 by hurabe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone 
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic-errors
RM			=	rm -rf

OBJS_DIR	=	objs/
SRCS		=	megaphone.cpp
OBJS		=	$(patsubst %.cpp, $(OBJS_DIR)%.o, $(SRCS))

GREEN  = \033[1;32m
RESET  = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJS_DIR)%.o : $(SRCS)
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(NAME)
	@ echo "$(GREEN)---------- test 1 ----------$(RESET)"
	./$< "shhhhh... I think the students are asleep..."
	@ echo "$(GREEN)---------- test 2 ----------$(RESET)"
	./$< Damnit " ! " "Sorry students, I thought this thing was off."
	@ echo "$(GREEN)---------- test 3 ----------$(RESET)"
	./$<
	
clean:
	$(RM) $(OBJS_DIR)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re