##############################  SOURCE & OBJETS  ###############################

SRCS =	main.cpp \
		PhoneBook.class.cpp \
		Contact.class.cpp

OBJS = $(SRCS:.cpp=.o)

################################  VARIABLES  ###################################

NAME =  Awesome_PhoneBook

INCLUDE = Phonebook.class.hpp Contact.class.hpp

RM = rm -f

GCCF = c++ -Wall -Wextra -Werror -std=c++98

##################################  RULES  #####################################

all :	$(INCLUDE) $(NAME)

$(NAME):	$(INCLUDE) $(OBJS) 
			$(GCCF) $(OBJS) -o $(NAME)

%.o: %.c	$(INCLUDE) 
	${GCCF} -c $< -o $@ 

############################  CLEAN & RE & phony  ##############################

clean:
	${RM} ${OBJS} 

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
#################################### FIN  ######################################
