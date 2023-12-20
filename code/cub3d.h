/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 03:00:06 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/20 14:34:27 by ebelfkih         ###   ########.fr       */
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

#define WIDTH 1800
#define HEIGHT 900
#define CLM 3

typedef struct s_player {
	int		score;
	double		view_angle;
	double	rad_current_view;
	double	x;
	double	y;
	double	mv_speed;
	double	rt_speed;
}t_player;

typedef struct s_mini_map {
	int		mini_block;
	int		map_height;
	int		map_width;
	double		x;
	double		y;

}t_mini_map;

typedef struct s_texture {
	mlx_image_t*	N_texture;
	mlx_image_t*	S_texture;
	mlx_image_t*	W_texture;
	mlx_image_t*	E_texture;
}t_texture;

typedef struct s_map {
	mlx_image_t* 	img;
	t_mini_map*		mini_map;
	t_texture*		texture;
	t_player		*player;
	mlx_t*			mlx;
	char			**map;
	float			pp;
	int				max_height;
	int				max_width;
	int				map_height;
	int				map_width;
	int				block_size;
	int				floor_color[3];
	int				ceiling_color[3];

}t_map;

void	put_mini_map(t_map *map);
void	put_area(int x, int y, int size, mlx_image_t* img);
void	put_der(t_map *map);
void	player_update(t_map *map, int mv, int rt);
void	put_line(double x, double y, double rt_ang, int len, mlx_image_t* img);
int		is_wall(t_map* map, double x, double y);
double	horizontal_ray_lenght(t_map *map, double angle, double cs, double sn);
double	Vertical_ray_lenght(t_map *map, double angle, double cs, double sn);
double  ray_lenght(t_map *map, double angle);
void 	ray_caster(t_map *map);
void walls(t_map * map, double len, double x_id);

#endif