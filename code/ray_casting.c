/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_casting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:21:16 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/20 14:27:32 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

double horizontal_ray_lenght(t_map *map, double angle, double cs, double sn)
{
	double xa;
	double ya;
	double d_x;
	double d_y;
	int     t = -3;

	ya = map->player->y - ((int)map->player->y % map->block_size);
	if (sn > 0)
	{
		ya += map->block_size;
		t = 3;
	}
	xa = map->player->x + ((ya - map->player->y) / tan(angle));
	if (is_wall(map, xa, ya + t))
		return sqrt(pow(map->player->x - xa, 2) + pow(map->player->y - ya, 2));
	d_x = map->block_size / tan(angle);
	d_y = map->block_size;
	if (sn < 0)
		d_y = d_y * -1;
	if (cs < 0 && d_x > 0)
		d_x = d_x * -1;
	if (cs > 0 && d_x < 0)
		d_x = d_x * -1;
	while (true)
	{
		ya += d_y;
		xa += d_x;
		if (is_wall(map, xa, ya + t))
			return sqrt(pow(map->player->x - xa, 2) + pow(map->player->y - ya, 2));
	}
}

double Vertical_ray_lenght(t_map *map, double angle, double cs, double sn)
{
	double xa;
	double ya;
	double d_x;
	double d_y;
	int     t = -3;

	xa = map->player->x - ((int)map->player->x % map->block_size);
	if (cs > 0)
	{
		xa += map->block_size;
		t = 3;
	}
	ya = map->player->y + ((xa - map->player->x) * tan(angle));
	if (is_wall(map, xa + t, ya))
		return sqrt(pow(map->player->x - xa, 2) + pow(map->player->y - ya, 2));
	d_x = map->block_size;
	d_y = map->block_size * tan(angle);
	if (cs < 0)
		d_x = d_x * -1;
	if (sn < 0 && d_y > 0)
		d_y = d_y * -1;
	if (sn > 0 && d_y < 0)
		d_y = d_y * -1;
	while (true)
	{
		ya += d_y;
		xa += d_x;
		if (is_wall(map, xa + t, ya))
			return sqrt(pow(map->player->x - xa, 2) + pow(map->player->y - ya, 2));
	}
}

double  ray_lenght(t_map *map, double angle)
{
	double  horizontal;
	double  Vertical;
	double cs;
	double sn;

	sn = sin(angle);
	cs = cos(angle);
	horizontal = horizontal_ray_lenght(map, angle, cs, sn) * cos(map->player->rad_current_view - angle);
	Vertical = Vertical_ray_lenght(map, angle, cs, sn) * cos(map->player->rad_current_view - angle);
	if (horizontal > Vertical)
		return (Vertical);
	else
		return (horizontal);
}

void  ray_caster(t_map *map)
{
	double   angle;
	double   ray_part;
	int clm;

	clm = 0;
	angle = (map->player->view_angle/2 * -1) + map->player->rad_current_view;
	ray_part = map->player->view_angle  * CLM / WIDTH;
	while (angle < map->player->view_angle / 2 + map->player->rad_current_view)
	{
		// put_line(map->mini_map->map_width / 2 , map->mini_map->map_height / 2, angle,  ray_lenght(map, angle) * map->mini_map->mini_block / map->block_size ,map->img);
		walls(map, ray_lenght(map, angle), clm);
		angle += ray_part;
		clm+= CLM;
	}
}

void walls(t_map * map, double len, double x_id)
{
	float   walllen;
	float   y_id;
	int     i;
	int     j;

	i = 0;
	walllen = ((map->block_size / len) * map->pp);
	y_id = (HEIGHT / 2) - (walllen / 2);
	if (walllen >= HEIGHT)
	{
		while (i < CLM && x_id + i < WIDTH)
		{
			put_line(x_id + i, 0, M_PI / 2, HEIGHT, map->img);            
			i++;
		}
	}
	else
	{
		while (i < CLM && x_id + i < WIDTH)
		{

			j = 0;
			while (j < y_id)
			{
				mlx_put_pixel(map->img, x_id + i, 0 + j, 200);
				j++;
			}
			put_line(x_id + i, y_id, M_PI / 2, walllen, map->img);
			j = 0;
			while (j < y_id)
			{
				mlx_put_pixel(map->img, x_id + i,  y_id + walllen + j, 200);
				j++;
			}
			// put_line(x_id + i, y_id + len, M_PI / 2, (len - HEIGHT ) / 2, map->img);
			i++;
		}
	}
}