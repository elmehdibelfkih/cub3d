/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_casting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:21:16 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/28 20:02:16 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	delta(t_map *map, double cs, double sn, char c)
{
	if (c == 'v')
	{
		if (cs < 0)
			map->ray->d_x = map->ray->d_x * -1;
		if (sn < 0 && map->ray->d_y > 0)
			map->ray->d_y = map->ray->d_y * -1;
		if (sn > 0 && map->ray->d_y < 0)
			map->ray->d_y = map->ray->d_y * -1;
	}
	else
	{
		if (sn < 0)
			map->ray->d_y = map->ray->d_y * -1;
		if (cs < 0 && map->ray->d_x > 0)
			map->ray->d_x = map->ray->d_x * -1;
		if (cs > 0 && map->ray->d_x < 0)
			map->ray->d_x = map->ray->d_x * -1;
	}
}

void	adjust(int *x, int *y, double cs, double sn)
{
	if (sn <= 0 && cs >= 0)
	{
		*x = 1;
		*y = -1;
	}
	else if (sn <= 0 && cs <= 0)
	{
		*x = -1;
		*y = -1;
	}
	else if (sn >= 0 && cs <= 0)
	{
		*x = -1;
		*y = +1;
	}
	else if (sn >= 0 && cs >= 0)
	{
		*x = 1;
		*y = 1;
	}
}

double	horizontal_ray_lenght(t_map *map, double angle, double cs, double sn)
{
	int		x;
	int		y;

	adjust(&x, &y, cs, sn);
	map->ray->ya = map->player->y - ((int)map->player->y % map->b_s);
	if (sn > 0)
		map->ray->ya += map->b_s;
	map->ray->xa = map->player->x
		+ ((map->ray->ya - map->player->y) / tan(angle));
	if (is_wall(map, map->ray->xa, map->ray->ya + y))
		return (sqrt(pow(map->player->x - map->ray->xa, 2)
				+ pow(map->player->y - map->ray->ya, 2)));
	map->ray->d_x = map->b_s / tan(angle);
	map->ray->d_y = map->b_s;
	delta(map, cs, sn, 'h');
	while (true)
	{
		map->ray->ya += map->ray->d_y;
		map->ray->xa += map->ray->d_x;
		if (is_wall(map, map->ray->xa, map->ray->ya + y))
			return (sqrt(pow(map->player->x - map->ray->xa, 2)
					+ pow(map->player->y - map->ray->ya, 2)));
	}
}

double	vertical_ray_lenght(t_map *map, double angle, double cs, double sn)
{
	int		x;
	int		y;

	adjust(&x, &y, cs, sn);
	map->ray->xa = map->player->x - ((int)map->player->x % map->b_s);
	if (cs > 0)
		map->ray->xa += map->b_s;
	map->ray->ya = map->player->y
		+ ((map->ray->xa - map->player->x) * tan(angle));
	if (is_wall(map, map->ray->xa + x, map->ray->ya))
		return (sqrt(pow(map->player->x - map->ray->xa, 2)
				+ pow(map->player->y - map->ray->ya, 2)));
	map->ray->d_x = map->b_s;
	map->ray->d_y = map->b_s * tan(angle);
	delta(map, cs, sn, 'v');
	while (true)
	{
		map->ray->ya += map->ray->d_y;
		map->ray->xa += map->ray->d_x;
		if (is_wall(map, map->ray->xa + x, map->ray->ya))
			return (sqrt(pow(map->player->x - map->ray->xa, 2)
					+ pow(map->player->y - map->ray->ya, 2)));
	}
}

double	ray_lenght(t_map *map, double angle, uint32_t *color)
{
	double	horizontal;
	double	vertical;
	double	cs;
	double	sn;

	sn = sin(angle);
	cs = cos(angle);
	horizontal = horizontal_ray_lenght(map, angle, cs, sn)
		* cos(map->player->rad_current_view - angle);
	vertical = vertical_ray_lenght(map, angle, cs, sn)
		* cos(map->player->rad_current_view - angle);
	if ((sn == 0 || horizontal > vertical) && cs != 0)
	{
		map->ray->ver = 1;
		*color = is_nesw(sn, cs, 1);
		return (vertical);
	}
	else
	{
		map->ray->ver = 0;
		*color = is_nesw(sn, cs, 0);
		return (horizontal);
	}
}
