NAME		=	lib_gnl.so	

BINDIR		=	../bin/

CC 			= 	gcc

RM			=	rm -f

CFLAGS		=	-g -shared -fPIC -Wall -Wextra -Werror -Wpedantic -ggdb -fsanitize=address

IFLAGS		=	-I./

DEP_M		= 	get_next_line.h makefile

DEP_B		=	get_next_line_bonus.h makefile

SOURCES		=	$(wildcard *.c)

BONUS		=	$(wildcard *_bonus.c)

FILTER		=	$(filter-out $(BONUS), $(SOURCES))

all:				$(BINDIR)$(NAME)

$(BINDIR)$(NAME):	$(FILTER) $(DEP_M)
						@echo Building Library...
						$(CC) $(FILTER) $(CFLAGS) -o $(BINDIR)$(NAME) $(IFLAGS)

bonus:				$(BONUS) $(DEP_B)
						@echo Building Bonus...
						$(CC) $(BONUS) $(CFLAGS) -o $(BINDIR)$(NAME) $(IFLAGS)

clean:		
						$(RM) $(BINDIR)$(NAME)

re:					clean $(BINDIR)$(NAME)

.PHONY:		all bonus clean fclean re