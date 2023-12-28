/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 03:00:06 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/28 12:56:03 by ebelfkih         ###   ########.fr       */
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
# include "MLX42/include/MLX42/MLX42.h"
# include "libft/libft.h"

int	g_width;
int	g_height;
int	g_clm;

typedef struct s_info
{
	int		fd;
	char	**file;
	int		height;
	int		start;
	int		items;
	char	**no_txt;
	char	**we_txt;
	char	**so_txt;
	char	**ea_txt;
	char	**c_colors;
	char	**f_colors;
}	t_info;

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
	mlx_texture_t	*n_texture;
	mlx_texture_t	*s_texture;
	mlx_texture_t	*e_texture;
	mlx_texture_t	*w_texture;
	mlx_image_t		*n_img;
	mlx_image_t		*s_img;
	mlx_image_t		*e_img;
	mlx_image_t		*w_img;
}	t_texture;

typedef struct s_map
{
	mlx_image_t	*img;
	t_mini_map	*mini_map;
	t_texture	*texture;
	t_player	*player;
	mlx_t		*mlx;
	t_ray		*ray;
	t_info		*info;
	char		**map;
	float		pp;
	int			height;
	int			width;
	int			b_s;
	int			floor_color[3];
	int			ceiling_color[3];

}	t_map;

void	put_mini_map(t_map *map);
void	put_area(int x, int y, int size, mlx_image_t *img);
void	put_der(t_map *map);
void	player_update(t_map *map, int mv, int rt);
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
void	run_game(t_map *map);
void	ft_hook(void *param);
void	init_data(t_map *map, char *av);
void	window_update(t_map *map);
void	ft_error(void);
void	init_textures(t_map *map);
void	put_c(t_map *map, double y_id, double x_id, int i);
void	put_f(t_map *map, double len, double x_id, int i);
void	init_info(t_map *vars);
void	check_file(t_info *info, t_map *map);
void	check_texture(t_info *info);
void	check_colors(t_info *info, t_map *map);
void	check_map(t_map *vars, t_info *info);
void	set_map(t_map *vars, char **f_map);
char	*get_spaces(int size);
int		max_width(char **f_map, int start);
int		is_digit(char *arr);
void	start_map(t_info *info, char **f_map);
int		height_map(t_info *info, char **f_map);
int		valid_char(char **map);
int		is_exist(char *str, int c);
int		nbr_item(char *s, char c);
void	ft_clearr(char **arr);
void	free_txt(t_info *info);
void	free_clr(t_info *info);
void	free_all(t_info *info, char **map, char *msg);
void	ft_puterr(char *str);
int		get_y(char **map);
int		get_x(char **map, int i);
void	print_map(char **vars);
void	height_file(char *av, t_info *info);
void	read_file(char *av, t_info *info);
void	check_extention(char *av);
int		increment(char *line, char c);
int		just_spaces(char *map_line);

#endif