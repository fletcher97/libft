CC = gcc
BIN_DIR = bin
SRC_DIR = src
INC_DIR = inc
OBJ_DIR = obj
CFLAGS = -Wall -Wextra -Werror
DFLAGS = -Wall -Wextra -Werror -g -fsanitize=address

AR = ar rcs

NAME = libft.a

vpath %.o $(OBJ_DIR)
vpath %.h $(INC_DIR)
vpath %.c $(SRC_DIR)

OBJS =	ft_atoi.o			\
		ft_bzero.o			\
		ft_calloc.o			\
		ft_isalnum.o		\
		ft_isalpha.o		\
		ft_isascii.o		\
		ft_isdigit.o		\
		ft_isprint.o		\
		ft_itoa.o			\
		ft_memccpy.o		\
		ft_memchr.o			\
		ft_memcmp.o			\
		ft_memcpy.o			\
		ft_memmove.o		\
		ft_memset.o			\
		ft_putchar_fd.o		\
		ft_putendl_fd.o		\
		ft_putnbr_fd.o		\
		ft_putstr_fd.o		\
		ft_split.o			\
		ft_strchr.o			\
		ft_strdup.o			\
		ft_strjoin.o		\
		ft_strlcat.o		\
		ft_strlcpy.o		\
		ft_strlen.o			\
		ft_strmapi.o		\
		ft_strncmp.o		\
		ft_strnstr.o		\
		ft_strrchr.o		\
		ft_strtrim.o		\
		ft_substr.o			\
		ft_tolower.o		\
		ft_toupper.o		\
		ft_lstadd_back.o	\
		ft_lstadd_front.o	\
		ft_lstclear.o		\
		ft_lstdelone.o		\
		ft_lstiter.o		\
		ft_lstlast.o		\
		ft_lstmap.o			\
		ft_lstnew.o			\
		ft_lstsize.o		\
		ft_abs.o			\
		ft_islower.o		\
		ft_isspace.o		\
		ft_isupper.o		\
		ft_strcpy.o			\
		ft_strjoin_m.o		\
		ft_strtok.o			\
		ft_strwcnt.o		\
		ft_strchr_i.o		\
		ft_max.o			\
		ft_min.o			\
		ft_uitoa.o			\
		ft_itoa_base.o		\
		ft_swap.o			\
		ft_strrev.o			\
		ft_ternary.o		\
		ft_set.o			\

${NAME} : ${OBJS}
	${AR} ${BIN_DIR}/${NAME} $(addprefix ${OBJ_DIR}/, ${OBJS})

%.o : %.c
	$(CC) ${CFLAGS} -c $< -I ${INC_DIR} -o ${OBJ_DIR}/$@

.PHNONY : clean fclean re all

clean :
	rm -f ${OBJ_DIR}/*

fclean : clean
	rm -f ${bin}/${NAME}

re : fclean ${NAME}

test : ${NAME}
	${CC} ${DFLAGS} tests/main.c -L. -l:${BIN_DIR}/${NAME} -I ${INC_DIR} -o test
