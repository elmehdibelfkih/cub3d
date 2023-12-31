# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/31 12:40:23 by ebelfkih          #+#    #+#              #
#    Updated: 2023/12/31 15:52:11 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3D
BONUS_NAME = cub3D_bonus
ONAME = cub3d.a 
BONUS_ONAME = cub3d_bonus.a 
CC = cc -Wall -Werror -Wextra #-fsanitize=address -g
MLX_LIBFT = libft/libft.a MLX42/libmlx42.a -Iinclude -ldl -lglfw -pthread -lm -L"/Users/$(USER)/.brew/opt/glfw/lib" #mac os
# MLX_LIBFT = libft/libft.a MLX42/build/libmlx42.a -Iinclude -ldl -lglfw -pthread -lm # linux os
LIBFT = cd libft && make all
RM = rm -f
AR = ar rc
MANDATORY_FILES = Mandatory/cub3d.c Mandatory/graphic/ray_casting.c Mandatory/graphic/walls.c Mandatory/graphic/init_update.c Mandatory/graphic/textures.c \
		Mandatory/parsing/file_state.c Mandatory/parsing/file_items.c Mandatory/parsing/free.c Mandatory/parsing/pars_data.c Mandatory/graphic/tools.c \
		Mandatory/parsing/pars_map.c Mandatory/parsing/utils_map.c Mandatory/parsing/utils.c Mandatory/parsing/utils1.c
BONUS_FILES = Bonus_part/cub3d.c Bonus_part/graphic/ray_casting.c Bonus_part/graphic/walls.c Bonus_part/graphic/init_update.c Bonus_part/graphic/textures.c \
		Bonus_part/parsing/file_state.c Bonus_part/parsing/file_items.c Bonus_part/parsing/free.c Bonus_part/parsing/pars_data.c Bonus_part/parsing/pars_map.c \
		Bonus_part/parsing/utils_map.c Bonus_part/parsing/utils.c Bonus_part/graphic/draw_mini_map.c Bonus_part/parsing/utils1.c Bonus_part/graphic/tools.c
MANDATORY_OBJ = $(MANDATORY_FILES:.c=.o)
BONUS_OBJ = $(BONUS_FILES:.c=.o)

%.o : %.c Mandatory/cub3d.h libft/libft.h Bonus/bonus_cub3d.h 
	$(CC) -o $@ -c $<

$(NAME) : $(MANDATORY_OBJ)
	echo " Start compiling  cub3d  and create  *.o  and *.a ..."
	$(LIBFT)
	$(AR) $(ONAME) $^
	$(CC) $(ONAME) $(MLX_LIBFT) -o $@
	echo " cub3d, *.o and *.a has been Created "

$(BONUS_NAME) : $(BONUS_OBJ)
	echo " Start compiling  cub3d  and create  *.o  and *.a ..."
	$(LIBFT)
	$(AR) $(BONUS_ONAME) $^
	$(CC) $(BONUS_ONAME) $(MLX_LIBFT) -o $@
	echo " cub3d, *.o and *.a has been Created "

all :
	echo " Start compiling  cub3d ..."
	$(LIBFT)
	$(CC) $(MANDATORY_FILES) -o $(NAME) $(MLX_LIBFT) 
	echo " cub3d programe has been Created "

bonus :
	echo " Start compiling  cub3d ..."
	$(LIBFT)
	$(CC) $(BONUS_FILES) -o $(BONUS_NAME) $(MLX_LIBFT) 
	echo " cub3d programe has been Created "

clean :
	cd libft && make clean
	$(RM) $(BONUS_OBJ) $(MANDATORY_OBJ)
	echo " archieve files are removed"

fclean: clean
	cd libft && make fclean
	$(RM) $(NAME) $(ONAME) $(BONUS_NAME)
	echo " executable file removed"


re: fclean all

.PHONY = clean fclean re all Bonus