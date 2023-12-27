/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 00:14:21 by ybouchra          #+#    #+#             */
/*   Updated: 2023/12/28 00:12:24 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

// void init_texture(t_mlx *mlx, t_info *info, t_map *map)
// {
//     mlx->mlx = mlx_init();
//     if(!mlx->mlx)
//     {
//         perror("Error");
//         return;
//     }
//     mlx->N_texture = mlx_new_image(mlx, info->NO_txt[1], map->height);
//     mlx->W_texture = mlx_new_image(mlx, info->WE_txt[1], map->height);
//     mlx->S_texture = mlx_new_image(mlx, info->SO_txt[1], map->height);
//     mlx->E_texture = mlx_new_image(mlx, info->EA_txt[1], map->height);
// }

void    height_file(char *av, t_info *info)
{
    char *line;

    line = NULL;
    info->fd = open(av, O_RDONLY, 0777);
    if(info->fd == -1)
        ft_puterr("Error: File Not Found");
    line = get_next_line(info->fd);
    while(line)
    {
        info->height++;
        free(line);
        line = get_next_line(info->fd);
    }
    close(info->fd);
}

void    read_file(char *av, t_info *info)
{
    int i;

    i = 0;
    height_file(av, info);
    if(!info->height)
        ft_puterr("Error: Empty File");
    info->fd = open(av, O_RDONLY);
    info->file = malloc(sizeof(char *) * (info->height + 1));
    if(!info->file)
        ft_puterr("Error: allocation failed !!");  
    while(info->height > i)
        info->file[i++] = get_next_line(info->fd);
    info->file[i] = NULL;

    close(info->fd);
}

void check_extention(char *av)
{
    if (!av || !is_exist(av, '.'))
        ft_puterr("Error: Invalid Argument !!");
    if (ft_strncmp(ft_strrchr(av, '.'), ".cub", ft_strlen(av)))
        ft_puterr("ERROR : Wrong Extention !!");
}



// void    init_info(t_info *info, t_map *vars, t_player *player)
// {
//     player->y = get_y(vars->map);
//     player->x = get_x(vars->map, player->y);
//     printf("%s %s\n", info->NO_txt[0], info->NO_txt[1]);
//     printf("%s %s\n", info->WE_txt[0], info->WE_txt[1]);
//     printf("%s %s\n", info->SO_txt[0], info->SO_txt[1]);
//     printf("%s %s\n", info->EA_txt[0], info->EA_txt[1]);
    
//     printf("%s %s %s\n", info->C_colors[0], info->C_colors[1], info->C_colors[2]);
//     printf("%s %s %s\n", info->F_colors[0], info->F_colors[1], info->F_colors[2]);

//     printf("%s\n", vars->map_height);
//     printf("%s\n", vars->map_width);
//     printf("%s\n", vars->block_size);

//     print_map(vars->map);
//     exit(0);

//     // init_texture(mlx, info, vars);
// }