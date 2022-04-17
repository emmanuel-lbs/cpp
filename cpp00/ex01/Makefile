##############################  SOURCE & OBJETS  ###############################

SRCS =	main.cpp \
		PhoneBook.cpp \
		Contact.cpp

OBJS = $(SRCS:.cpp=.o)

################################  VARIABLES  ###################################

NAME =  Awesome_PhoneBook

INCLUDE = Phonebook.hpp Contact.hpp

RM = rm -f

CC = c++
GCCF = $(CC) -Wall -Wextra -Werror -std=c++98

##################################  RULES  #####################################

all :	$(NAME)

$(NAME):	$(INCLUDE) $(OBJS) 
			$(GCCF) $(OBJS) -o $(NAME)

%.o:	%.cpp $(INCLUDE) 
	${GCCF} -c $< -o $@ 

############################  CLEAN & RE & phony  ##############################

clean:
	${RM} ${OBJS} 

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
#################################### FIN  ######################################
