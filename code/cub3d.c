/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:24:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/16 05:10:57 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void ft_error(void)
{
	fprintf(stderr, "%s", mlx_strerror(mlx_errno));
	exit(EXIT_FAILURE);
}

static void ft_hook(void* param)
{
	t_map* map = param;
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
	// printf("%d\n", map->mlx->width);
}

void	player_update(t_map *map, int mv, int rt)
{
	double x;
	double y;

	map->player->rad_current_view += map->player->rt_speed * rt;
	// if (map->player->rad_current_view < 0)
	// 	map->player->rad_current_view = map->player->rad_current_view * -1;
	// if (map->player->rad_current_view >= 2  *  M_PI)
	// {
	// 	map->player->rad_current_view = map->player->rad_current_view - (map->player->rad_current_view / (2  *  M_PI));
	// }
	x = cos(map->player->rad_current_view) * mv * map->player->mv_speed;
	y = sin(map->player->rad_current_view) * mv * map->player->mv_speed;
	if (x + map->player->x < 0 || y + map->player->y < 0 || is_wall(map, x + map->player->x, y + map->player->y) == 1 )
		return ;
	map->player->x += x;
	map->player->y += y;
	put_mini_map(map);
	ray_caster(map);
}

void	init_data(t_map *map, t_player *player, t_mini_map *mini_map)
{
	map->player = player;
	map->mini_map = mini_map;
	map->block_size = 100;
	map->map_height = 34;
	map->map_width = 14;
	map->player->score = 0;
	map->player->mv_speed = 3;
	map->player->rt_speed = 3 * (M_PI / 180);
	map->player->view_angle = 60 * (M_PI / 180);
	map->player->x = 1005;
	map->player->y = 1005;
	map->player->rad_current_view = -0.5;
	map->mini_map->mini_block = 20;
	map->mini_map->x = 8;
	map->mini_map->y = 6;
	map->mini_map->map_height = map->mini_map->y * map->mini_map->mini_block;
	map->mini_map->map_width = map->mini_map->x * map->mini_map->mini_block;
}

int32_t	main(void)
{
	t_map map;
	t_player player;
	t_mini_map minimap;
	
	char **ma;

	ma = malloc(sizeof(char *)*15);

	ma[0] =  ft_strdup("1111111111111111111111111");
	ma[1] =  ft_strdup("1000000000110000000000001");
	ma[2] =  ft_strdup("1011000001110000000000001");
	ma[3] =  ft_strdup("1001000000000000000000001");
	ma[4] =  ft_strdup("11111111101100000111000011111");
	ma[5] =  ft_strdup("10000000001100000111000000001");
	ma[6] =  ft_strdup("11110111111111011100000010001");
	ma[7] =  ft_strdup("11110111111111011101010010001");
	ma[8] =  ft_strdup("11000000110101011100000010001");
	ma[9] =  ft_strdup("10000000000000001100000010001");
	ma[10] =  ft_strdup("10000000000000001101010010001");
	ma[11] =  ft_strdup("1100000111010101111101111000111");
	ma[12] =  ft_strdup("11110111 1110101 101111010001");
	ma[13] =  ft_strdup("11111111 1111111 111111111111");
	ma[14] = NULL;

	map.map = ma;
	init_data(&map, &player, &minimap);
	// mlx_get_monitor_size(0, &map.max_width, &map.max_height);
	mlx_t* mlx = mlx_init(WIDTH, HEIGHT, "cub3d", true);
	if (!mlx)
		ft_error();
	map.mlx = mlx;
	map.img = mlx_new_image(mlx, WIDTH, HEIGHT);
	if (!map.img || (mlx_image_to_window(mlx, map.img, 0, 0) < 0))
		ft_error();
	mlx_loop_hook(mlx, ft_hook, (void *)&map);
	mlx_loop(mlx);
	mlx_terminate(mlx);
	return (EXIT_SUCCESS);
}
