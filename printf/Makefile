CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

SOURCE=libft/ft_putchar_fd.c \
libft/ft_isalpha.c \
libft/ft_putnbr_fd.c \
libft/ft_putstr_fd.c \
libft/ft_strlen.c \
libft/ft_tolower.c \
libft/ft_toupper.c \
ft_putthing.c \
ft_printf.c	\
ft_hexadez.c \
ft_lowerupercase.c
OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	@cc -c $(CFLAGS) $< -o $@ 

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all