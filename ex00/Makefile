# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/22 19:32:35 by hurabe            #+#    #+#              #
#    Updated: 2024/12/22 19:45:36 by hurabe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone 
CC			=	c++
CXXFLAG		=	-Wall -Wextra -Werror -std=c++98 -pedantic-errors
RM			=	rm -rf

OBJS_DIR	=	objs/
SRCS		=	megaphone.cpp
OBJS		=	$(patsubst %.cpp, $(OBJS_DIR)%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAG) $(OBJS) -o $@

$(OBJS_DIR)%.o : $(SRCS)
	mkdir -p $(@D)
	$(CC) $(CXXFLAG) -c $< -o $@

test: $(NAME)
	@ echo "---------- test 1 ----------"
	./$< "shhhhh... I think the students are asleep..."
	@ echo "---------- test 2 ----------"
	./$< Damnit " ! " "Sorry students, I thought this thing was off."
	@ echo "---------- test 3 ----------"
	./$<
	
clean:
	$(RM) $(OBJS_DIR)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re