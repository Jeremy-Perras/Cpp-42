NAME = Bureaucrat

SRCS = main.cpp Bureaucrat.cpp Form.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp Intern.cpp

INCLUDES = -I.

OBJS = $(SRCS:.cpp=.o)

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

.c.o:
		${CC} ${FLAGS} -I. -c $< -o ${<:.cpp=.o}

$(NAME) : $(OBJS)

	$(CC) $(FLAGS) -o $(NAME) $(INCLUDES) $(OBJS)

all : $(NAME)


debug :
	$(CC) -g $(FLAGS) -o $(NAME) $(SRCS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
