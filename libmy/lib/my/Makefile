##
## EPITECH PROJECT, 2023
## Day10
## File description:
## task01
##

NAME	=	libmy.a

SRCS	=	my_compute_factorial_it.c    \
		my_evil_str.c    \
		my_print_alpha.c    \
		my_put_nbr.c    \
		my_strcat.c    \
		my_strlowcase.c    \
		my_str_to_word_array.c    \
		functions_lol.c    \
		functions_lol_base.c	\
		my_compute_factorial_rec.c    \
		my_find_prime_sup.c    \
		my_print_comb.c    \
		my_putstr.c    \
		my_strcmp.c    \
		my_strncat.c    \
		my_strupcase.c    \
		my_compute_power_it.c    \
		my_getnbr.c    \
		my_print_digits.c    \
		my_revstr.c    \
		my_strcpy.c    \
		my_strncmp.c    \
		my_swap.c    \
		my_compute_power_rec.c    \
		my_isneg.c    \
		my_print_revalpha.c    \
		my_sort_int_array.c    \
		my_strdup.c    \
		my_strncpy.c    \
		temp_decla2.c    \
		my_compute_square_root.c    \
		my_is_prime.c    \
		my_putchar.c    \
		my_strcapitalize.c    \
		my_strlen.c    \
		my_strstr.c    \
		temp_decla.c	\
		my_puterr.c	\
		my_getnbr_wrd_strt.c	\
		my_put_nbr_base.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_str_isupper.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Werror -Wall -Wextra

all:	$(NAME)
	cp libmy.a ../

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)

clean: rm $(OBJS)
