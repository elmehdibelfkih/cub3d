/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 03:00:06 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/11 06:18:41 by ebelfkih         ###   ########.fr       */
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
	int		x; // youssef
	int		y; // youssef
	int		mv; // 0 
	int		rt; // 0
	float	rad_current_view; // M_PI / 2  || 0 || 3M_PY/3 || M_PI
	int		view_angle; // 60
	int		score; // 0
	float		mv_speed; // 3
	float		rt_speed; // 2 * (M_P1 / 180)
}t_player;

typedef struct s_map {
	t_player		*player;
	mlx_image_t*	N_texture; // youssef
	mlx_image_t*	S_texture; // youssef
	mlx_image_t*	W_texture; // youssef
	mlx_image_t*	E_texture; // youssef
	mlx_image_t* 	mini_map;
	char			**map; // youssef
	int				max_height;
	int				max_width;
	int				map_height; // youssef
	int				map_width; // youssef
	int				block_size; // 60
	int				floor_color[3]; // youssef
	int				ceiling_color[3]; // youssef
	mlx_t*			mlx ;

}t_map;

void put_mini_map(t_map *map, mlx_image_t* img);
void put_area(int x, int y, int size, int color, mlx_image_t* img);
void	put_player(int x, int y, int size, t_map *map, mlx_image_t* img);
void put_der(t_map *map);
void	player_ang(t_player *player);

#endif