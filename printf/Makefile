NAME = libftprintf.a
SRC =	ft_printf.c ft_putcharc.c ft_putnbrc.c ft_putstrc.c ft_strchrc.c \
		ft_putnbrc_base.c \

OBJ = ${SRC:.c=.o}
LIBC = ar -rc
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME} : ${OBJ}

.c.o:
	${CC} ${CFLAGS} -c $< -o $@
	${LIBC} ${NAME} $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all
