##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Root Makefile to compile project
##

SRC_MAIN	=	main.c								\

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

SRC	=	src/push_swap.c								\
		src/error_handling/check_error.c			\
		src/manage_list/add_node_first.c			\
		src/manage_list/add_node_last.c				\
		src/manage_list/create_list.c				\
		src/manage_list/print_list.c				\
		src/manage_list/free_list.c					\
		src/manage_list/check_sorted_list.c			\
		src/manage_list/init_list.c					\
		src/operation/pa.c							\
		src/operation/sa.c							\
		src/algo/sort.c

OBJ	=	$(SRC:.c=.o)

SRC_TEST	=	tests/test_pushswap.c

OBJ_TEST	=	$(SRC_TEST:.c=.o)

OBJ_GCNO	=	$(SRC:.c=.gcno) $(SRC_MAIN:.c=.gcno) $(SRC_TEST:.c=.gcno)

OBJ_GCDA	=	$(SRC:.c=.gcda) $(SRC_MAIN:.c=.gcda) $(SRC_TEST:.c=.gcda)

EXE_TEST	=	tests_run

CFLAGS  += -Werror -Wextra -Wall
LIBFLAGS +=	-L./lib/my -lmy
CPPFLAGS +=	-I./include

NAME	=	push_swap

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_MAIN)
	make -C./lib/my
	gcc -o $(NAME) $(OBJ_MAIN) $(OBJ) $(LIBFLAGS) $(CPPFLAGS) $(CFLAGS)

unit_tests:	LDLIBS += -lcriterion --coverage
unit_tests:	CFLAGS += --coverage

unit_tests: $(OBJ) $(OBJ_TEST)
		make -C./lib/my
		gcc -o $(EXE_TEST) $(OBJ_TEST) $(OBJ) $(LDLIBS) $(LIBFLAGS)

tests_run: unit_tests
		./$(EXE_TEST) --verbose

clean:
	$(RM) $(OBJ) $(OBJ_MAIN) $(OBJ_TEST) $(OBJ_GCNO) $(OBJ_GCDA)
	$(RM) *~
	$(RM) *#

fclean:	clean
	make fclean -C ./lib/my
	$(RM) $(NAME)
	$(RM) $(EXE_TEST)

re:	fclean all

.PHONY: all clean fclean re
