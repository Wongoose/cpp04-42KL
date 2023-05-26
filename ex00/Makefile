# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 12:53:31 by zwong             #+#    #+#              #
#    Updated: 2023/05/26 16:57:33 by zwong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal
COMPILER = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(SRCS)
	$(COMPILER) $(CFLAGS) $(OBJS) -o $@

clean : 
	rm $(OBJS)

fclean : clean 
	rm -rf $(NAME)

re : fclean all