# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/24 01:51:14 by hurabe            #+#    #+#              #
#    Updated: 2024/12/24 10:47:48 by hurabe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook
CXX			=	c++
CXXFLAGS 	=	-Wall -Wextra -Werror -std=c++98 -pedantic-errors
RM			=	rm -rf

INCS		=	-I includes/
SRCS_DIR	=	srcs/
OBJS_DIR	=	objs/
SRCS_FILES	=	Contact.cpp	PhoneBook.cpp main.cpp
SRCS		=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))
OBJS		=	$(patsubst $(SRCS_DIR)%.cpp, $(OBJS_DIR)%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCS) $(OBJS) -o $@

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean:
	$(RM) $(OBJS_DIR) $(NAME)

re: fclean all

.PHONY:	all clean fclean re