SRC=$(addprefix Mandatory/, libft/ft_atoi.c\
							libft/ft_lstnew.c\
							libft/ft_lstadd_back.c\
							libft/ft_lstadd_front.c\
							libft/ft_lstsize.c\
							libft/ft_lstclean.c\
							libft/ft_split.c\
							utils/utils1.c\
							utils/utils2.c\
							parse/parse.c\
							actions/push.c\
							actions/swap.c\
							actions/rotate.c\
							actions/reverse_rotate.c\
							algo/algo_utils.c\
							algo/algo_utils2.c\
							algo/easy_sort.c\
							algo/heavy_sort.c\
							main.c\
							)
OBJ=$(SRC:.c=.o)
NAME=push_swap
HEADER=include/push_swap.h
CC=cc
CFLAG=-Wall -Wextra -Werror -g
Mandatory/%.o:Mandatory/%.c $(HEADER)
		$(CC) $(CFLAG) -c $< -o $@
all:$(NAME)
$(NAME):$(OBJ)
		$(CC) $(CFLAG) $(OBJ) -o $(NAME)
clean:
		rm -f $(OBJ)
fclean:clean
		rm -f $(NAME)
re:fclean all
