/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:24:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/23 12:15:22 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_error(void)
{
	write(2, mlx_strerror(mlx_errno), ft_strlen(mlx_strerror(mlx_errno)));
	exit(EXIT_FAILURE);
}

int32_t	main(void)
{
	t_map		map;
	t_player	player;
	t_mini_map	minimap;
	mlx_t		*mlx;
	t_ray		ray;
	char		**ma;

	ma = malloc(sizeof(char *) * 15);
	ma[0] = ft_strdup("1111111111111111111111111");
	ma[1] = ft_strdup("1000000000110000000000001");
	ma[2] = ft_strdup("1011000001110000000000001");
	ma[3] = ft_strdup("1001000000000000000000001");
	ma[4] = ft_strdup("11111111101100000111000011111");
	ma[5] = ft_strdup("10000000001100000111000000001");
	ma[6] = ft_strdup("11110111111111011100000010001");
	ma[7] = ft_strdup("11110111111111011101010010001");
	ma[8] = ft_strdup("11000000110101011100000010001");
	ma[9] = ft_strdup("10000000000000001100000010001");
	ma[10] = ft_strdup("10000000000000001101010010001");
	ma[11] = ft_strdup("1100000111010101111101111000111");
	ma[12] = ft_strdup("11110111 1110101 101111010001");
	ma[13] = ft_strdup("11111111 1111111 111111111111");
	ma[14] = NULL;
	map.map = ma;
	map.ray = &ray;
	init_data(&map, &player, &minimap);
	mlx = mlx_init(g_width, g_height, "cub3d", true);
	if (!mlx)
		ft_error();
	map.mlx = mlx;
	map.img = mlx_new_image(mlx, g_width, g_height);
	if (!map.img || (mlx_image_to_window(mlx, map.img, 0, 0) < 0))
		ft_error();
	ray_caster(&map);
	put_mini_map(&map);
	mlx_loop_hook(mlx, ft_hook, (void *)&map);
	mlx_loop(mlx);
	mlx_terminate(mlx);
	return (EXIT_SUCCESS);
}
