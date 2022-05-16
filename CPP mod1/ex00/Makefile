NAME = Zombie

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

INCLUDES = -I.

OBJS = $(SRCS:.cpp=.o)

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

.c.o:
		${CC} ${FLAGS} -I. -c $< -o ${<:.cpp=.o}

$(NAME) : $(OBJS)

	$(CC) $(FLAGS) -o $(NAME) $(INCLUDES) $(OBJS)

all : $(NAME)


test :
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
