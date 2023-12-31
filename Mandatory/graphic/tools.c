/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 15:41:16 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/31 15:43:34 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	delete_tex(t_map *map)
{
	mlx_delete_texture(map->texture->e_texture);
	mlx_delete_texture(map->texture->w_texture);
	mlx_delete_texture(map->texture->n_texture);
	mlx_delete_texture(map->texture->s_texture);
	mlx_delete_image(map->mlx, map->img);
}

int	is_nesw(double sn, double cs, int ver)
{
	if (sn <= 0 && cs >= 0)
	{
		if (ver)
			return ('e');
		return ('n');
	}
	if (sn <= 0 && cs <= 0)
	{
		if (ver)
			return ('w');
		return ('n');
	}
	if (sn >= 0 && cs <= 0)
	{
		if (ver)
			return ('w');
		return ('s');
	}
	if (sn >= 0 && cs >= 0)
	{
		if (ver)
			return ('e');
		return ('s');
	}
	return (-1);
}

uint32_t	get_rgba(int r, int g, int b, int a)
{
	return (r << 24 | g << 16 | b << 8 | a);
}

void	ft_error(void)
{
	write(2, mlx_strerror(mlx_errno), ft_strlen(mlx_strerror(mlx_errno)));
	exit(EXIT_FAILURE);
}
