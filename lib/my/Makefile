##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile for LIB
##

SRC	=	my_putchar.c				\
		my_isneg.c					\
		my_put_nbr.c				\
		my_put_nbrbase.c			\
		my_swap.c					\
		my_putstr.c					\
		my_strlen.c					\
		my_getnbr.c					\
		my_sort_int_array.c			\
		my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_is_prime.c				\
		my_find_prime_sup.c			\
		my_strcpy.c					\
		my_strncpy.c				\
		my_revstr.c					\
		my_strcmp.c					\
		my_strncmp.c				\
		my_strupcase.c				\
		my_strlowcase.c				\
		my_strcapitalize.c			\
		my_str_isalpha.c			\
		my_str_isnum.c				\
		my_str_islower.c			\
		my_str_isupper.c			\
		my_str_isprintable.c		\
		my_strcat.c					\
		my_strncat.c				\
		my_printf.c					\
		my_strdup.c					\
		my_skip_space.c				\
		my_print_octal.c			\
		my_str_to_word_array.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my*.h ../../include

clean :
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
