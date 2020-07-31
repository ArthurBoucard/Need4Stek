##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make lib
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	compile_lib

END		+=	\e[0m"
CRED	+=	"\x1b[31m

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)
	cp libmy.a ../
	rm -f $(OBJ)

clean:
	rm -f libmy.a
	rm -f ../libmy.a
	@echo -e $(CRED)======[LIB CLEANED]=====$(END)

%.o: %.c
	gcc -o $@ -c $< $(CFLAGS)
