/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_mini_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:12:29 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/11 06:52:03 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void put_mini_map(t_map *map, mlx_image_t* img)
{
	int y;
	int x;
	int x_s;
	int y_s;

	y = 0;
	x = 0;
	y_s = map->player->y/100 - 8;
	x_s = map->player->x/100 - 8;
	while (map->map[y_s] && y_s <= map->player->y/100 + 8)
	{
		x_s = map->player->x/100 - 8;;
		x = 0;
		while (map->map[y_s][x_s] && x_s <= map->player->x/100 + 8)
		{
			if (map->map[y_s][x_s] == '1')
				put_area(x*10 , y*10, 20, 180, img);
			else if (map->map[y_s][x_s] == '0')
				put_area(x*10, y*10, 20, 60, img);
			x++;
			x_s++;
		}
		y_s++;
		y++;
	}
	put_area(map->player->x/100 - 2, map->player->x/100 - 2, 5, 0, img);
	put_der(map);
}

void put_der(t_map *map)
{
	float x;
	float y;
	int i = 1;
	x = map->player->x/100;
	y = map->player->y/100;

	while (i < 11)
	{
		x += cos(map->player->rad_current_view) * 1;
		y += sin(map->player->rad_current_view) * 1;
		i++;
		mlx_put_pixel(map->mini_map, x, y, 0);
	}
	
}

void player_mv(t_player *player)
{
	player->x += player->mv*player->mv_speed;
	player->mv = 0;

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

// void player_p(int *x, int *y)
// {
// 	int i;
// }