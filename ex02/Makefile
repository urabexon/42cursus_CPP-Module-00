# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/24 12:13:18 by hurabe            #+#    #+#              #
#    Updated: 2024/12/24 12:55:10 by hurabe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Account
CXX			=	c++
CXXFLAGS 	=	-Wall -Wextra -Werror -std=c++98 -pedantic-errors
RM			=	rm -rf

SRCS	=	Account.cpp	tests.cpp
OBJS		=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY:	all clean fclean re