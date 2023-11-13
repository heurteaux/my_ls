##
## EPITECH PROJECT, 2023
## my_printf
## File description:
## makefile
##

NAME		=	a.out

LIB_NAME	=	./my_printf/libmy.a

LIB			=	my_printf

SRCS	:=	$(shell find $(SRC_DIRS) -name "*.c" \
			-not -path "./testroom/*" \
			-not -name "main_dev.c"	\
			-not -path "./libmy/*")

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Werror -Wall -Wextra

TEST_NAME	=	unit_tests

SRC_TEST	=	tests/test_my_printf.c

TESTFLAGS	=	-lcriterion --coverage

$(NAME):	$(OBJS)
	make -C libmy/lib/my/
	gcc -o $(NAME) $(OBJS) ./libmy/lib/my/libmy.a

all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re: fclean all

dev_test: $(OBJS)
	make -C libmy/lib/my/
	gcc main_dev.c $(OBJS) ./libmy/lib/my/libmy.a -g3
	make clean