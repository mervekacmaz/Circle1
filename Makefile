SRCS			= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_isdigit.c\
					ft_bzero.c ft_calloc.c ft_memchr.c \
					ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
					ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c \
					ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
					ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
					ft_strlcpy.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
					ft_strtrim.c ft_substr.c ft_strlen.c ft_striteri.c

OBJS			= $(SRCS:.c=.o)

CC				= gcc

RM				= rm -rf

CFLAGS			= -Wall -Wextra -Werror -I. #-I adds include directory of header files.

NAME			= libft.a

all:			$(NAME) #it starts working from here 

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)
				
#r means replace the old files with the new files if the library exists
#c means create the library if it doesnt exists
#s means sort, write an object file index into the archive

clean:
				$(RM) $(OBJS)
				

fclean:			clean
				$(RM) $(NAME)
				
re:				fclean $(NAME)

.PHONY:			all clean fclean re 
