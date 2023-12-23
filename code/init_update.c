/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_update.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:24:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/23 18:01:52 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

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
	if (mlx_is_key_down(map->mlx, MLX_KEY_S))
		ft_speed(map, 's');
	if (mlx_is_key_down(map->mlx, MLX_KEY_R))
		ft_speed(map, 'r');
	if (mlx_is_key_down(map->mlx, MLX_KEY_V))
		ft_speed(map, 'v');
	if (mlx_is_key_down(map->mlx, MLX_KEY_P))
		ft_speed(map, 'p');
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

void	ft_speed(t_map *map, char c)
{
	if (map->player->mv_speed >= 90 && c == 's')
		map->player->mv_speed = 10;
	else if (c == 's')
		map->player->mv_speed += 15;
	if (map->player->rt_speed >= 5 * (M_PI / 180) && c == 'r')
		map->player->rt_speed = 1 * (M_PI / 180);
	else if (c == 'r')
		map->player->rt_speed += 0.5 * (M_PI / 180);
	if (map->player->view_angle >= 90 * (M_PI / 180) && c == 'v')
	{
		map->player->view_angle = 60 * (M_PI / 180);
		map->pp = (g_width / 2) / tan(map->player->view_angle / 2);
	}
	else if (c == 'v')
	{
		map->player->view_angle += 5 * (M_PI / 180);
		map->pp = (g_width / 2) / tan(map->player->view_angle / 2);
	}
	if (g_clm >= 20 && c == 'p')
		g_clm = 1;
	else if (c == 'p')
		g_clm += 1;
	player_update(map, 0, 0);
	usleep(100000);
}

void	player_update(t_map *map, int mv, int rt)
{
	double	x;
	double	y;
	int		x_a;
	int		y_a;

	map->player->rad_current_view += map->player->rt_speed * rt;
	x = cos(map->player->rad_current_view) * mv * map->player->mv_speed;
	y = sin(map->player->rad_current_view) * mv * map->player->mv_speed;
	x_a = (cos(map->player->rad_current_view) * mv * 100) + map->player->x + x;
	y_a = (sin(map->player->rad_current_view) * mv * 100) + map->player->y + y;
	if (!(x + x_a < 0 || y + y_a < 0 || is_wall(map, x_a + x, y_a + y) == 1))
	{
		map->player->x += x;
		map->player->y += y;
	}
	ray_caster(map);
	put_mini_map(map);
}

void	init_data(t_map *map, t_player *player, t_mini_map *mini_map)
{
	g_height = 1000;
	g_width = 2100;
	g_clm = 1;
	map->player = player;
	map->mini_map = mini_map;
	map->block_size = 512;
	map->map_height = 34;
	map->map_width = 14;
	map->player->score = 0;
	map->player->mv_speed = 30;
	map->player->rt_speed = 1 * (M_PI / 180);
	map->player->view_angle = 60 * (M_PI / 180);
	map->player->x = 900;
	map->player->y = 900;
	map->player->rad_current_view = 3 * M_PI / 2;
	map->mini_map->mini_block = 20;
	map->mini_map->x = 8;
	map->mini_map->y = 6;
	map->mini_map->map_height = map->mini_map->y * map->mini_map->mini_block;
	map->mini_map->map_width = map->mini_map->x * map->mini_map->mini_block;
	map->pp = (g_width / 2) / tan(map->player->view_angle / 2);
	map->ceiling_color[0] = 12;
	map->ceiling_color[1] = 10;
	map->ceiling_color[2] = 150;
	map->floor_color[0] = 225;
	map->floor_color[1] = 30;
	map->floor_color[2] = 60;
	init_textures(map);
}

void	init_textures(t_map *map)
{
	map->texture->s_texture =  mlx_load_png("../textures_l/Brick/Brick_01-512x512.png");
	map->texture->e_texture =  mlx_load_png("../textures_l/Brick/Brick_01-512x512.png");
	map->texture->w_texture =  mlx_load_png("../textures_l/Brick/Brick_01-512x512.png");
	map->texture->n_texture =  mlx_load_png("../textures_l/Brick/Brick_01-512x512.png");
	// map->texture->n_img = mlx_texture_to_image(map->mlx, map->texture->n_texture);
	// map->texture->s_img = mlx_texture_to_image(map->mlx, map->texture->s_texture);
	// map->texture->e_img = mlx_texture_to_image(map->mlx, map->texture->e_texture);
	// map->texture->w_img = mlx_texture_to_image(map->mlx, map->texture->w_texture);
}