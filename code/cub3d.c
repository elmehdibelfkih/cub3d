/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:24:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/11 06:38:44 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

#define WIDTH 1800
#define HEIGHT 900

static void ft_error(void)
{
	fprintf(stderr, "%s", mlx_strerror(mlx_errno));
	exit(EXIT_FAILURE);
}

static void ft_hook(void* param)
{
	t_map* map = param;
	// printf("WIDTH: %d | HEIGHT: %d\n", map->mlx->width, map->mlx->height);
	if (mlx_is_key_down(map->mlx, MLX_KEY_ESCAPE))
		mlx_close_window(map->mlx);
	if (mlx_is_key_down(map->mlx, MLX_KEY_UP))
		map->player->mv = 1;
	if (mlx_is_key_down(map->mlx, MLX_KEY_DOWN))
		map->player->mv = -1;
	if (mlx_is_key_down(map->mlx, MLX_KEY_LEFT))
		map->player->rt = -1;
	if (mlx_is_key_down(map->mlx, MLX_KEY_RIGHT))
		map->player->rt = 1;
	player_ang(map->player);
	put_mini_map(map, map->mini_map);
		
}

// void	player_mv(t_map *map)
// {
// 	map->player->x += map->player->mv_speed*map->player->mv;
// 	map->player->y += map->player->mv_speed*map->player->mv;
// }

void	player_ang(t_player *player)
{
	player->rad_current_view += player->rt_speed * player->rt;
	player->rt = 0;
	player->x += cos(player->rad_current_view) * player->mv * player->mv_speed;
	player->y += sin(player->rad_current_view) * player->mv * player->mv_speed;
	player->mv = 0;
}

int32_t	main(void)
{
	t_map map;
	t_player player;
	
	char **ma;

	ma = malloc(sizeof(char *)*15);
	ma[0] =  ft_strdup("      11111 111   11111111  11111");
	ma[1] =  ft_strdup("      100011101111100000011110001");
	ma[2] =  ft_strdup("   111100000101000000000111111111");
	ma[3] =  ft_strdup("   1000000000000000000001");
	ma[4] =  ft_strdup("   1111111110110000011101111");
	ma[5] =  ft_strdup("     110000001100000111011111111");
	ma[6] =  ft_strdup("111111001111111101110000001000111");
	ma[7] =  ft_strdup("111000011111111001100010011100001");
	ma[8] =  ft_strdup("111111100011010101110000001000111");
	ma[9] =  ft_strdup("      10000000000001100000011001");
	ma[10] = ft_strdup("   11110000000000001101010010001");
	ma[11] = ft_strdup("   11000001010101011111001110001");
	ma[12] = ft_strdup("   11110111011101000111101000001");
	ma[13] = ft_strdup("10101010101010101010101010101010101");
	// ma[13] = ft_strdup("     1111 111 1111111  111111111");
	map.player = &player;
	ma[14] = NULL;
	map.block_size = 100;
	map.map = ma;
	map.map_height = 34;
	map.map_width = 14;
	map.player->score = 0;
	map.player->mv_speed = 3;
	map.player->rt_speed = 3 * (M_PI / 180);
	map.player->x = 11 * map.block_size	+ 50;
	map.player->y = 11 * map.block_size + 50;
	map.player->rad_current_view = M_PI;
	map.player->mv = -1;
	map.player->rt = -1;
	mlx_get_monitor_size(0, &map.max_width, &map.max_height);
	mlx_t* mlx = mlx_init(WIDTH, HEIGHT, "cub3d", false);
	if (!mlx)
		ft_error();
	map.mlx = mlx;
	map.mini_map = mlx_new_image(mlx, 1800, 900);
	if (!map.mini_map || (mlx_image_to_window(mlx, map.mini_map, 0, 0) < 0))
		ft_error();
	// put_mini_map(&map, map.mini_map);
	mlx_loop_hook(mlx, ft_hook, (void *)&map);
	mlx_loop(mlx);
	mlx_terminate(mlx);
	// printf("%f\n", player.rad_current_view);
	return (EXIT_SUCCESS);
}
