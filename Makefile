##
## PERSONAL PROJECT, 2023
## my_math Makefile
## File description:
## Placeholder
##

NAME   = my_math

CC	   = gcc

CFLAGS = -Wall -Wextra -Wno-unused-value -Wno-sign-compare \
	-Wno-unused-parameter -I./include

LIBS   = \

SRC	   = \

OBJ	   = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f ../$(NAME)

re: fclean all
