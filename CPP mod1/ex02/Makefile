NAME = brain

SRCS = main.cpp

#INCLUDES = -I./includes

OBJS = $(SRCS:.cpp=.o)

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

$(NAME) : $(OBJS)

	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

all : $(NAME)


test :
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
