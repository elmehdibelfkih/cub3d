/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_mini_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:12:29 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/12 12:13:26 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void put_mini_map(t_map *map)
{
	float x;
	float y;
	float x_p;
	float y_p;

	x = 0;
	while (x < map->mini_map->map_width)
	{
		y = 0;
		while (y < map->mini_map->map_height)
		{
			x_p = map->player->x - (map->block_size * (map->mini_map->map_width/2 - x) / map->mini_map->mini_block);
			y_p = map->player->y - (map->block_size * (map->mini_map->map_height/2 - y) / map->mini_map->mini_block);
			if (is_wall(map, x_p, y_p) == 1)
				mlx_put_pixel(map->mini_map->img, x, y, 255);
			else if (is_wall(map, x_p, y_p) == 0)
				mlx_put_pixel(map->mini_map->img, x, y, 80);
			else 
				mlx_put_pixel(map->mini_map->img, x, y, 0);
			y++;
		}
		x++;
	}
	
	put_mini_map_limits(map->mini_map);
	put_der(map);
}

void put_mini_map_limits(t_mini_map *mini_map)
{
	put_line(0, mini_map->map_height, 0, mini_map->map_width, mini_map->img);
	put_line(mini_map->map_width, 0, M_PI/2 ,mini_map->map_height, mini_map->img);
	put_line(0, mini_map->map_height + 1, 0, mini_map->map_width, mini_map->img);
	put_line(mini_map->map_width + 1, 0, M_PI/2 ,mini_map->map_height + 1, mini_map->img);

	put_area(mini_map->map_width/2 - 2, mini_map->map_height/2 - 2, 5, 255, mini_map->img);
	
}

void put_line(float x, float y, float rt_ang, int len, mlx_image_t* img)
{
	int i;

	i = 0;
	while (i < len)
	{
		x += cos(rt_ang);
		y += sin(rt_ang);
		i++;
		mlx_put_pixel(img, x, y, 255);
	}
}

int	is_wall(t_map* map, int x, int y)
{
	int j = x/map->block_size;
	int i = y/map->block_size;
	
	if (i < 0 || j < 0|| j >= map->map_height || i >= map->map_width)
		return (3);
	if (map->map[i][j] == '1')
		return (1);
	else if (map->map[i][j] == '0')
		return (0);
	else if (map->map[i][j] == ' ')
		return (-1);
	return (3);
}

void put_der(t_map *map)
{
	float x;
	float y;
	int i = 1;
	x = map->mini_map->map_width/2;
	y = map->mini_map->map_height/2;

	while (i < 11)
	{
		x += cos(map->player->rad_current_view);
		y += sin(map->player->rad_current_view);
		i++;
		mlx_put_pixel(map->mini_map->img, x, y, 255);
	}
	
}

void put_area(int x_start, int y_start, int size, int color, mlx_image_t* img)
{
	int x_end;
	int y_end;
	int y_tmp;

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
