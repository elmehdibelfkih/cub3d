/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_mini_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:12:29 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/13 07:18:03 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	put_mini_map(t_map *map)
{
	float	x;
	float	y;
	float	x_p;
	float	y_p;

	x = -1;
	while (++x < map->mini_map->map_width)
	{
		y = -1;
		while (++y < map->mini_map->map_height)
		{
			x_p = map->player->x - (map->block_size * (map->mini_map->map_width
						/ 2 - x) / map->mini_map->mini_block);
			y_p = map->player->y - (map->block_size * (map->mini_map->map_height
						/ 2 - y) / map->mini_map->mini_block);
			if (is_wall(map, x_p, y_p) == 1)
				mlx_put_pixel(map->img, x, y, 255);
			else if (is_wall(map, x_p, y_p) == 0)
				mlx_put_pixel(map->img, x, y, 80);
			else
				mlx_put_pixel(map->img, x, y, 0);
		}
	}
	put_der(map);
}

void	put_line(float x, float y, float rt_ang, int len, mlx_image_t *img)
{
	int	i;

	i = 0;
	while (i < len)
	{
		x += cos(rt_ang);
		y += sin(rt_ang);
		i++;
		mlx_put_pixel(img, x, y, 255);
	}
}

int	is_wall(t_map *map, int x, int y)
{
	int	j;
	int	i;

	j = x / map->block_size;
	i = y / map->block_size;
	if (i < 0 || j < 0 || i >= map->map_width || j >= (int)ft_strlen(map->map[i]))
		return (-1);
	if (map->map[i][j] == '1')
		return (1);
	else if (map->map[i][j] == '0')
		return (0);
	else
		return (-1);
	return (3);
}

void	put_der(t_map *map)
{
	float	x;
	float	y;
	int		i;

	i = 1;
	x = map->mini_map->map_width / 2;
	y = map->mini_map->map_height / 2;
	while (i < 11)
	{
		x += cos(map->player->rad_current_view);
		y += sin(map->player->rad_current_view);
		i++;
		mlx_put_pixel(map->img, x, y, 255);
	}
	put_area(map->mini_map->map_width / 2 - 2,
		map->mini_map->map_height / 2 - 2, 5, 255, map->img);
}

void	put_area(int x_start, int y_start, int size, int color, mlx_image_t *img)
{
	int		x_end;
	int		y_end;
	int		y_tmp;

	x_end = x_start + size;
	y_end = y_start + size;
	y_tmp = y_start;
	while (x_start < x_end)
	{
		y_start = y_tmp;
		while (y_start < y_end)
		{
			mlx_put_pixel(img, x_start, y_start, color);
			y_start++;
		}
		x_start++;
	}
	return ;
}
