# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 10:59:06 by ebelfkih          #+#    #+#              #
#    Updated: 2023/12/28 00:41:37 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3d
ONAME = cub3d.a 
CC = cc -Wall -Werror -Wextra
MLX_LIBFT = libft/libft.a MLX42/build/libmlx42.a -Iinclude -ldl -lglfw -pthread -lm -L"/Users/$(USER)/.brew/opt/glfw/lib" #mac os
# MLX_LIBFT = libft/libft.a MLX42/build/libmlx42.a -Iinclude -l`dl -lglfw -pthread -lm # linux os
LIBFT = cd libft && make all
RM = rm -f
AR = ar rc
FILES = graphic/draw_mini_map.c cub3d.c graphic/ray_casting.c graphic/walls.c graphic/init_update.c graphic/textures.c parsing/file_items.c parsing/free.c parsing/pars_data.c parsing/pars_map.c parsing/utils_map.c parsing/utils.c parsing/utils1.c
OBJ = $(FILES:.c=.o)

%.o : %.c cub3d.h libft/libft.h
	$(CC) -o $@ -c $<

$(NAME) : $(OBJ)
	echo " Start compiling  cub3d  and create  *.o  and *.a ..."
	$(LIBFT)
	$(AR) $(ONAME) $^
	$(CC) $(ONAME) $(MLX_LIBFT) -o $@
	echo " cub3d, *.o and *.a has been Created "

all :
	echo " Start compiling  cub3d ..."
	$(LIBFT)
	$(CC) $(FILES) -o $(NAME) $(MLX_LIBFT) 
	echo " cub3d programe has been Created "

clean :
	cd libft && make clean
	$(RM) $(OBJ)
	echo " archieve files are removed"

fclean: clean
	cd libft && make fclean
	$(RM) $(NAME) $(ONAME)
	echo " executable file removed"


re: fclean all

.PHONY = clean fclean re all