##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC					=	src/main.c			\
						src/106bombyx.c		\
						src/my_str_isnum.c


CFLAGS				=	-Wall -Wextra

CPPFLAGS			=	-I./include/

OBJ					=	$(SRC:.c=.o)

NAME				=	106bombyx

all:	$(NAME)

$(NAME):	CFLAGS += -O2
$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

tests_run:	CFLAGS += --coverage
tests_run:	LDLIBS += -lcriterion
tests_run:	$(LDLIBS)
	@find -name "*.gc*" -delete
	$(CC) -o unit_tests $(SRC_TEST) tests/*.c $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)
	./unit_tests
	$(RM) unit_tests test*.gc*
	mkdir -p coverage
	mv *.gc* coverage/

debug:	CFLAGS += -g
debug:	$(LDLIBS)
	$(CC) -o $(NAME) $(SRC) $(LDFLAGS) $(LDLIBS) $(CFLAGS) $(CPPFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) unit_tests *.gc*

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all tests_run debug clean fclean re
