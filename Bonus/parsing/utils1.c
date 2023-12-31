/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 00:14:21 by ybouchra          #+#    #+#             */
/*   Updated: 2023/12/28 12:41:46 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	valid_char(char **map)
{
	int	i;
	int	j;

	i = -1;
	if (!map || !map[0])
		return (0);
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] != '0' && map[i][j] != '1' && map[i][j] != ' ')
			{
				if (map[i][j] != 'N' && map[i][j] != 'W' && map[i][j] != 'S'
					&& map[i][j] != 'E')
					return (0);
			}
		}
	}
	return (1);
}

int	get_y(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (ft_strchr(map[i], 'N') || ft_strchr(map[i], 'W')
			|| ft_strchr(map[i], 'S') || ft_strchr(map[i], 'E'))
			return (i);
		i++;
	}
	return (0);
}

int	get_x(char **map, int y)
{
	int	j;

	j = -1;
	while (map[y][++j])
		if (map[y][j] == 'N' || map[y][j] == 'W'
			|| map[y][j] == 'S' || map[y][j] == 'E')
			return (j);
	return (0);
}

void	check_extention(char *av)
{
	if (!av || !is_exist(av, '.'))
		ft_puterr("Error: Invalid Argument !!");
	if (ft_strncmp(ft_strrchr(av, '.'), ".cub", ft_strlen(av)))
		ft_puterr("ERROR : Wrong Extention !!");
}

void	init_info(t_map *map)
{
	if (map->map[get_y(map->map)][get_x(map->map, get_y(map->map))] == 'N')
		map->player->rad_current_view = (3 * M_PI) / 2;
	if (map->map[get_y(map->map)][get_x(map->map, get_y(map->map))] == 'W')
		map->player->rad_current_view = M_PI;
	if (map->map[get_y(map->map)][get_x(map->map, get_y(map->map))] == 'S')
		map->player->rad_current_view = (M_PI / 2);
	if (map->map[get_y(map->map)][get_x(map->map, get_y(map->map))] == 'E')
		map->player->rad_current_view = 0;
}
