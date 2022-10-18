NAME = libft.a

SRCS = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c\
ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c \
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c \
ft_toupper.c ft_calloc.c ft_memchr.c  ft_isalnum.c \
ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c \
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c\

BONUS = ft_lstnew.c  ft_lstsize.c ft_lstlast.c ft_lstadd_front.c\
ft_lstadd_back.c \

CC = cc -Wall -Wextra -Werror
OBJS = ${SRCS:%.c=%.o}
O_BONUS = ${BONUS:%.c=%.o}
all : $(NAME)

$(NAME) : bonus $(OBJS)
	ar rc $(NAME) $(O_BONUS) $(OBJS)

%.o : %.c
	$(CC) -c $^
bonus : $(BONUS)
	$(CC) -c $^
clean :
	rm -rf $(OBJS) $(O_BONUS)
fclean : clean
	rm -rf $(NAME)
re : fclean $(NAME)