/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 08:43:54 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/29 02:47:16 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	is_nesw(double sn, double cs, int ver)
{
	if (sn <= 0 && cs >= 0)
	{
		if (ver)
			return (63); // e
		return (252); // n
	}
	else if (sn <= 0 && cs <= 0)
	{
		if (ver)
			return (126); // w
		return (252); // n
	}
	else if (sn >= 0 && cs <= 0)
	{
		if (ver)
			return (126); // w
		return (189); // s
	}
	else if (sn >= 0 && cs >= 0)
	{
		if (ver)
			return (63); // e
		return (189); // s
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
	int		pos;
	int		y_pos;
	int		tmp;

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
		while (i < g_clm && x_id + i < g_width)
		{
			put_c(map, y_id, x_id, i);
			j = -1;
			while (++j < walllen)
			{
				if (map->ray->ver == 1)
				{
					pos = (int)map->ray->ya % map->b_s + j;
				}
				else
				{
					pos = (int)map->ray->xa % map->b_s + j;
					// printf("%d\n", pos);
				}
				y_pos = j * map->b_s / walllen;
				tmp = (pos * y_pos) + pos;
				printf("%d\n", tmp);
				color = get_rgba(map->texture->e_texture->pixels[tmp + 0], map->texture->e_texture->pixels[tmp + 1], map->texture->e_texture->pixels[tmp + 2], map->texture->e_texture->pixels[tmp + 3]);
				mlx_put_pixel(map->img, x_id + i, y_id + j, color);
			}
			i++;
			put_f(map, len, x_id, i);
		}
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
