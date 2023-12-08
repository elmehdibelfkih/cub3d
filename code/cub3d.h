/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 03:00:06 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/06 20:20:46 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <time.h>
# include <string.h>
# include <math.h>
# include <stdbool.h>
# include "../MLX42/include/MLX42/MLX42.h"
# include "../libft/libft.h"

typedef struct s_player {
	float	x; // youssef 
	float	y; // youssef
	int		mv;
	int		rt;
	float	rad_current_view; // youssef
	int		view_angle;
	int		score;
	int		mv_speed;
	int		rt_speed;
}t_player;

typedef struct s_map {
	t_player		*player;
	// mlx_image_t*	N_texture; // mehdi
	// mlx_image_t*	S_texture; // mehdi
	// mlx_image_t*	W_texture; // mehdi
	// mlx_image_t*	E_texture; // mehdi
	char*			N_texture; // youssef
	char*			S_texture; // youssef
	char*			W_texture; // youssef
	char*			E_texture; // youssef
	char			**map; // youssef
	int				max_screen_height; // mehdi
	int				max_screen_width; // mehdi
	int				map_height; // youssef
	int				map_width; // youssef
	int				block_size;
	int				floor_color[3]; // youssef
	int				ceiling_color[3]; // youssef
	mlx_t*			mlx ;

}t_map;

void put_mini_map(t_map *map, mlx_image_t* img);
void put_area(int x, int y, int size, int color, mlx_image_t* img);
void	put_player(int x, int y, int size, t_map *map, mlx_image_t* img);

#endif