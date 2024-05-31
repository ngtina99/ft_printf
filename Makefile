NAME	=	libftprintf.a

SRC = ft_printf.c ft_chars.c ft_nums.c

OBJ = $(SRC:.c=.o)

RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:	
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all