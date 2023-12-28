/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 08:43:54 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/28 12:27:42 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	get_rgba(int r, int g, int b, int a)
{
	return (r << 24 | g << 16 | b << 8 | a);
}

int	is_nesw(double sn, double cs, int ver)
{
	if (sn <= 0 && cs >= 0)
	{
		if (ver)
			return (63);
		return (252);
	}
	else if (sn <= 0 && cs <= 0)
	{
		if (ver)
			return (126);
		return (252);
	}
	else if (sn >= 0 && cs <= 0)
	{
		if (ver)
			return (126);
		return (189);
	}
	else if (sn >= 0 && cs >= 0)
	{
		if (ver)
			return (63);
		return (189);
	}
	return (-1);
}

void	ray_caster(t_map *map)
{
	double		angle;
	double		ray_part;
	uint32_t	color;
	int			clm;

	clm = 0;
	angle = (map->player->view_angle / 2 * -1) + map->player->rad_current_view;
	ray_part = map->player->view_angle * g_clm / g_width;
	while (angle < map->player->view_angle / 2 + map->player->rad_current_view)
	{
		walls(map, ray_lenght(map, angle, &color), clm, color);
		angle += ray_part;
		clm += g_clm;
	}
}

void	walls(t_map *map, double len, double x_id, uint32_t color)
{
	float		walllen;
	double		y_id;
	int			i;
	int			j;

	i = 0;
	walllen = ((map->b_s / len) * map->pp);
	y_id = (g_height / 2) - (walllen / 2);
	if (walllen >= g_height)
	{
		while (i < g_clm && x_id + i < g_width)
		{
			j = -1;
			while (++j < g_height)
				mlx_put_pixel(map->img, x_id + i, j, color);
			i++;
		}
	}
	else
	{
		put_c(map, y_id, x_id, i);
		while (i < g_clm && x_id + i < g_width)
		{
			j = -1;
			while (++j < walllen)
				mlx_put_pixel(map->img, x_id + i, y_id + j, color);
			i++;
		}
		put_f(map, len, x_id, i);
	}
}

void	put_c(t_map *map, double y_id, double x_id, int i)
{
	int	j;

	j = 0;
	while (j < y_id)
	{
		mlx_put_pixel(map->img, x_id + i, 0 + j, get_rgba(map->ceiling_color[0],
				map->ceiling_color[1], map->ceiling_color[2], 200));
		j++;
	}
}

void	put_f(t_map *map, double len, double x_id, int i)
{
	int		j;
	double	y_id;
	float	walllen;

	walllen = ((map->b_s / len) * map->pp);
	y_id = (g_height / 2) - (walllen / 2);
	j = 0;
	while (j < y_id)
	{
		mlx_put_pixel(map->img, x_id + i, y_id + walllen + j, get_rgba
			(map->floor_color[0], map->floor_color[1],
				map->floor_color[2], 200));
		j++;
	}
}
