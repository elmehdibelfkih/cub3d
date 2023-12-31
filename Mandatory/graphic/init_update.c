/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_update.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:24:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/30 20:17:29 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_hook(void *param)
{
	t_map	*map;

	map = param;
	if (mlx_is_key_down(map->mlx, MLX_KEY_ESCAPE))
		mlx_close_window(map->mlx);
	if (mlx_is_key_down(map->mlx, MLX_KEY_UP))
		player_update(map, 1, 0);
	if (mlx_is_key_down(map->mlx, MLX_KEY_DOWN))
		player_update(map, -1, 0);
	if (mlx_is_key_down(map->mlx, MLX_KEY_LEFT))
		player_update(map, 0, -1);
	if (mlx_is_key_down(map->mlx, MLX_KEY_RIGHT))
		player_update(map, 0, 1);
	if (map->mlx->width != g_width || map->mlx->height != g_height)
		window_update(map);
}

void	window_update(t_map *map)
{
	g_width = map->mlx->width;
	g_height = map->mlx->height;
	mlx_delete_image(map->mlx, map->img);
	map->img = mlx_new_image(map->mlx, g_width, g_height);
	if (!map->img || (mlx_image_to_window(map->mlx, map->img, 0, 0) < 0))
		ft_error();
	player_update(map, 0, 0);
}

void	player_update(t_map *map, int mv, int rt)
{
	double	x;
	double	y;
	int		x_a;
	int		y_a;
	int		i;

	i = 0;
	x = cos(map->player->rad_current_view) * mv * map->player->mv_speed;
	y = sin(map->player->rad_current_view) * mv * map->player->mv_speed;
	x_a = (cos(map->player->rad_current_view) * mv * 100) + map->player->x + x;
	y_a = (sin(map->player->rad_current_view) * mv * 100) + map->player->y + y;
	map->player->rad_current_view += map->player->rt_speed * rt;
	while (i < map->player->mv_speed)
	{
		x = cos(map->player->rad_current_view) * mv * i;
		y = sin(map->player->rad_current_view) * mv * i;
		if (is_wall(map, x + x_a, y + y_a) == 1)
			return ;
		i++;
	}
	map->player->x += x;
	map->player->y += y;
	ray_caster(map);
}

void	init_data(t_map *map, char *av)
{
	map->mlx = mlx_init(g_width, g_height, "cub3d", true);
	if (!map->mlx)
		ft_error();
	check_extention(av);
	read_file(av, map->info);
	check_file(map->info, map);
	check_map(map, map->info);
	map->b_s = 512;
	map->player->mv_speed = 70;
	map->player->rt_speed = 3 * (M_PI / 180);
	map->player->view_angle = 60 * (M_PI / 180);
	init_info(map);
	map->player->x = (get_x(map->map,
				get_y(map->map)) * map->b_s) + (map->b_s / 2);
	map->player->y = (get_y(map->map) * map->b_s) + (map->b_s / 2);
	map->map[get_y(map->map)][get_x(map->map, get_y(map->map))] = '0';
	map->pp = (g_width / 2) / tan(map->player->view_angle / 2);
	init_textures(map);
}

void	init_textures(t_map *map)
{
	map->texture->s_texture = mlx_load_png(map->info->so_txt[1]);
	if (!map->texture->s_texture)
		ft_error();
	map->texture->e_texture = mlx_load_png(map->info->ea_txt[1]);
	if (!map->texture->e_texture)
		ft_error();
	map->texture->w_texture = mlx_load_png(map->info->we_txt[1]);
	if (!map->texture->w_texture)
		ft_error();
	map->texture->n_texture = mlx_load_png(map->info->no_txt[1]);
	if (!map->texture->n_texture)
		ft_error();
	if (map->texture->e_texture->height != 512
		|| map->texture->e_texture->height != 512
		|| map->texture->e_texture->height != 512
		|| map->texture->e_texture->height != 512
		|| map->texture->e_texture->width != 512
		|| map->texture->e_texture->width != 512
		|| map->texture->e_texture->width != 512
		|| map->texture->e_texture->width != 512)
	{
		mlx_errno = MLX_INVPNG;
		ft_error();
	}
}
