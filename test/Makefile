NAME		=	test

BDIR		=	../bin/

DEP			= 	$(wildcard *.h) Makefile

SOURCES		=	$(wildcard *.c)

CC 			= 	gcc

RM			=	rm -f

CFLAGS		=	-g -fPIC -Wall -Wextra -Werror -Wpedantic -D BUFFER_SIZE=10

IFLAGS		=	-I./ -I../src/

LFLAGS		=	-L../bin/ -l_gnl -Wl,-rpath,../bin

all:		$(BDIR)$(NAME)

$(BDIR)$(NAME):	$(SOURCES) $(DEP)
				@echo Building test...
				$(CC) $(SOURCES) $(CFLAGS) -o $(BDIR)$(NAME) $(IFLAGS) $(LFLAGS)

clean:		
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(BDIR)$(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re