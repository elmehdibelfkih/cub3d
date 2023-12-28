/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 06:15:30 by ybouchra          #+#    #+#             */
/*   Updated: 2023/12/28 12:52:14 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_clearr(char **arr)
{
	int	i;

	i = -1;
	if (!arr || !arr[0])
		return ;
	while (arr[++i])
		free(arr[i]);
	free(arr);
	arr = NULL;
}

void	free_txt(t_info *info)
{
	ft_clearr(info->no_txt);
	ft_clearr(info->we_txt);
	ft_clearr(info->so_txt);
	ft_clearr(info->ea_txt);
}

void	free_clr(t_info *info)
{
	free_txt(info);
	ft_clearr(info->f_colors);
	ft_clearr(info->c_colors);
}

void	free_all(t_info *info, char **map, char *msg)
{
	ft_clearr(map);
	free_clr(info);
	ft_puterr(msg);
}

void	read_file(char *av, t_info *info)
{
	int	i;

	i = 0;
	height_file(av, info);
	if (!info->height)
		ft_puterr("Error: Empty File");
	info->fd = open(av, O_RDONLY);
	info->file = malloc(sizeof(char *) * (info->height + 1));
	if (!info->file)
		ft_puterr("Error: allocation failed !!");
	while (info->height > i)
		info->file[i++] = get_next_line(info->fd);
	info->file[i] = NULL;
	close(info->fd);
}
