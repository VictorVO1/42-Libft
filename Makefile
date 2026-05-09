NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror


SRCS =	isalpha.c isdigit.c isalnum.c isascii.c isprint.c strlen.c \
		memset.c bzero.c memcpy.c memmove.c strlcpy.c strlcat.c \
		toupper.c tolower.c strchr.c strrchr.c strncmp.c memchr.c \
		memcmp.c strnstr.c atoi.c calloc.c strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re