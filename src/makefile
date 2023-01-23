NAME		=	lib_gnl.so	

DEP			= 	$(wildcard *.h) makefile

BDIR		=	../bin/

SOURCES		=	$(wildcard *.c)

BONUS		=	$(wildcard *_bonus.c)

FILTER		=	$(filter-out $(BOUNUS), $(SOURCES))

CC 			= 	gcc

RM			=	rm -f

CFLAGS		=	-g -shared -fPIC -Wall -Wextra -Werror -Wpedantic -ggdb -fsanitize=address

IFLAGS		=	-I./

all:		$(BDIR)$(NAME)

$(BDIR)$(NAME):	$(FILTER) $(DEP)
				@echo Building Library...
				$(CC) $(FILTER) $(CFLAGS) -o $(BDIR)$(NAME) $(IFLAGS) 

clean:
				$(RM) $(BDIR)$(NAME)

re:			clean $(NAME)

.PHONY:		all clean re