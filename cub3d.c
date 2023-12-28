/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:24:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/28 12:40:58 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_error(void)
{
	write(2, mlx_strerror(mlx_errno), ft_strlen(mlx_strerror(mlx_errno)));
	exit(EXIT_FAILURE);
}

void	run_game(t_map *map)
{
	ray_caster(map);
	put_mini_map(map);
	mlx_loop_hook(map->mlx, ft_hook, (void *)map);
	mlx_loop(map->mlx);
	mlx_terminate(map->mlx);
	free_clr(map->info);
	ft_clearr(map->map);
}

int32_t	main(int ac, char **av)
{
	t_map		map;
	t_player	player;
	t_mini_map	minimap;
	t_texture	texture;
	t_info		info;

	if (ac != 2)
		return (write(2, "Error: incorrect syntax", 24), EXIT_FAILURE);
	map.texture = &texture;
	map.player = &player;
	map.mini_map = &minimap;
	map.info = &info;
	map.ray = (t_ray *)malloc(sizeof(t_ray *));
	g_width = 2100;
	g_height = 1000;
	g_clm = 1;
	ft_bzero(&info, sizeof(info));
	init_data(&map, av[1]);
	map.img = mlx_new_image(map.mlx, g_width, g_height);
	if (!map.img || (mlx_image_to_window(map.mlx, map.img, 0, 0) < 0))
		ft_error();
	run_game(&map);
	free(map.ray);
	return (EXIT_SUCCESS);
}
