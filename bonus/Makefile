NAME = libso_long_bonus.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -g

SRC = main_bonus.c get_map_zero_bonus.c \
		get_map_one_bonus.c get_map_two_bonus.c \
		get_map_three_bonus.c get_map_for_bonus.c \
		\
		\
		so_long_bonus.c sprite_zero_bonus.c \
		sprite_one_bonus.c sprite_two_bonus.c \
		sprite_player_bonus.c sprite_three_bonus.c \
		sprite_enemy_bonus.c sprite_for_bonus.c \
		sprite_five_bonus.c sprite_enemy_one_bonus.c \
		sprite_collector_bonus.c sprite_enemy_two_bonus.c

OBJ = $(SRC:.c=.o)

%.o : %.c
		$(CC) $(CFLAGS) -o $@ -c $<

all : $(NAME)

$(NAME) : $(OBJ)
		make -C ../libft/
		make -C ../printf/
		make -C ../minilibx-linux/
		ar rsc $@ $^

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re