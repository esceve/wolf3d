##
## makefile for makefile in /home/scherp_c/CPool_rush2
##
## Made by clement scherpereel
## Login <clement.scherpereel@epitech.eu>
##
## Started on  Sat Oct 15 15:14:22 2016 clement scherpereel
## Last update Sun Jan 15 17:53:29 2017 
##

CFLAGS = -W -Wall -Wextra -g

SRC	=	./src/main.c			\
		./src/frame_malloc.c		\
		./src/my_put_pixel.c		\
		./src/draw_h.c			\
		./src/draw_v.c			\
		./src/my_draw_line.c			\
		./src/my_putchar.c		\
		./src/my_putstr.c		\
		./src/splitter.c		\
		./src/function_error.c		\
		./src/function.c		\
		./src/my_realloc.c		\
		./src/my_memcpy.c		\
		./src/init_display.c		\
		./src/init_screen.c		\
		./src/init_variables.c		\
		./src/parser.c			\
		./src/my_strlen.c		\
		./src/splitter_int.c		\
		./src/handle_status.c		\
		./src/raycast.c		\
		./src/draw_wall.c		\
		./src/check_moves.c		\
		./src/on_update.c		\
		./src/move_forward.c			\
		./src/move_backward.c			\
		./src/move_left.c			\
		./src/move_right.c			\


OBJ	=	$(SRC:.c=.o)

NAME	=	wolf3d

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lc_graph_prog -lm

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
