##############################  SOURCE & OBJETS  ###############################

SRCS =	megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

################################  VARIABLES  ###################################

NAME = megaphone

#INCLUDE = 

RM = rm -f

CC = c++

GCCF = $(CC) -Wall -Wextra -Werror -std=c++98

##################################  RULES  #####################################

all :	$(NAME)

$(NAME):	$(OBJS) 
			$(GCCF) $(OBJS) -o $(NAME)

%.o:	%.cpp
	${GCCF} -c $< -o $@ 

############################  CLEAN & RE & phony  ##############################

clean:
	${RM} ${OBJS} 

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
#################################### FIN  ######################################
