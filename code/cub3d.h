/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 03:00:06 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/23 12:39:36 by ebelfkih         ###   ########.fr       */
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

int	g_width;
int	g_height;
int	g_clm;

typedef struct s_player
{
	int		score;
	double	view_angle;
	double	rad_current_view;
	double	x;
	double	y;
	double	mv_speed;
	double	rt_speed;
}	t_player;

typedef struct s_mini_map
{
	int		mini_block;
	int		map_height;
	int		map_width;
	double	x;
	double	y;
}	t_mini_map;

typedef struct s_ray
{
	double	xa;
	double	ya;
	double	d_x;
	double	d_y;
	int		x;
	int		y;
}	t_ray;

typedef struct s_texture
{
	mlx_image_t	*n_texture;
	mlx_image_t	*s_texture;
	mlx_image_t	*e_texture;
	mlx_image_t	*w_texture;
}	t_texture;

typedef struct s_map
{
	mlx_image_t	*img;
	t_mini_map	*mini_map;
	t_texture	*texture;
	t_player	*player;
	mlx_t		*mlx;
	t_ray		*ray;
	char		**map;
	float		pp;
	int			max_height;
	int			max_width;
	int			map_height;
	int			map_width;
	int			block_size;
	int			floor_color[3];
	int			ceiling_color[3];

}	t_map;

void	put_mini_map(t_map *map);
void	put_area(int x, int y, int size, mlx_image_t *img);
void	put_der(t_map *map);
void	player_update(t_map *map, int mv, int rt);
// void	put_line(double x, double y, double rt_ang, int len, mlx_image_t *img);
int		is_wall(t_map *map, double x, double y);
double	horizontal_ray_lenght(t_map *map, double angle, double cs, double sn);
double	vertical_ray_lenght(t_map *map, double angle, double cs, double sn);
double	ray_lenght(t_map *map, double angle, uint32_t *color);
void	ray_caster(t_map *map);
void	walls(t_map *map, double len, double x_id, uint32_t color);
int		get_rgba(int r, int g, int b, int a);
int		is_nesw(double sn, double cs, int ver);
void	delta(t_map *map, double cs, double sn, char c);
void	adjust(int *x, int *y, double cs, double sn);
void	ft_speed(t_map *map, char c);
void	ft_hook(void *param);
void	init_data(t_map *map, t_player *player, t_mini_map *mini_map);
void	window_update(t_map *map);
void	ft_error(void);

#endif