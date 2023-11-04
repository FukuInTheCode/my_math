##
## PERSONAL PROJECT, 2023
## my_math Makefile
## File description:
## Placeholder
##

NAME   = libmy_math.a

CFLAGS = -Wall -Wextra -Wno-unused-value -Wno-sign-compare \
	-Wno-unused-parameter -I./include

LIBS   = \

SRC	   = src/my_abs.c \

OBJ	   = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
