/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_casting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:21:16 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/16 05:11:28 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

double horizontal_ray_lenght(t_map *map, double angel)
{
    double xa;
    double ya;
    double d_x;
    double d_y;
    double cs;
    double sn;

    ya = floor(map->player->y/map->block_size) * map->block_size;
    xa = map->player->x + ((ya - map->player->y) / tan(angel));
    sn = sin(angel);
    cs = cos(angel);
    if (sn > 0)
    {
        ya += map->block_size;
        ya++;
    }
    else
        ya--;
    if (cs < 0)
        xa -= map->block_size;
    if (is_wall(map, xa, ya))
        return sqrt(pow(map->player->x - xa, 2) + pow(map->player->y - ya, 2));
    d_x = map->block_size / tan(angel);
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
        if (is_wall(map, xa, ya))
            return sqrt(pow(map->player->x - xa, 2) + pow(map->player->y - ya, 2));
    }
}

double Vertical_ray_lenght(t_map *map, double angel)
{
    double xa;
    double ya;
    double d_x;
    double d_y;
    double cs;
    double sn;

    xa = floor(map->player->x/map->block_size) * map->block_size;
    ya = map->player->y + ((xa - map->player->x) * tan(angel));
    sn = sin(angel);
    cs = cos(angel);
    if (sn < 0)
        ya -= map->block_size;
    if (cs > 0)
    {
        xa += map->block_size;
        xa++;
    }
    else
        xa--;
    
    if (is_wall(map, xa, ya))
        return sqrt(pow(map->player->x - xa, 2) + pow(map->player->y - ya, 2));
    d_y = map->block_size * tan(angel);
    d_x = map->block_size;
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
        if (is_wall(map, xa, ya))
            return sqrt(pow(map->player->x - xa, 2) + pow(map->player->y - ya, 2));
    }
}

double  ray_lenght(t_map *map, double angel)
{
    double  horizontal;
    double  Vertical;
    double  ray_view;
    
    ray_view = map->player->rad_current_view + angel;    
    horizontal = horizontal_ray_lenght(map, ray_view);
    Vertical = Vertical_ray_lenght(map, ray_view);
    if (horizontal > Vertical)
        return (Vertical);
    else
        return (horizontal);
}

void  ray_caster(t_map *map)
{
    double   angle;
    double   ray_part;
    int x = 0;
    int y = 0;

    angle = map->player->view_angle/2 * -1;
    ray_part = map->player->view_angle / WIDTH;
    while (angle < map->player->view_angle/2)
    {
        // wait
        // printf("%f\n", ray_lenght(map, angle));
        // y = (WIDTH / 2) - (ray_lenght(map, angle) / 2);
        y = 0;
        put_line(map->mini_map->map_width / 2 - 2 , map->mini_map->map_height / 2 - 2, angle + map->player->rad_current_view,  ray_lenght(map, angle) * 20 /100 ,map->img);
        // put_line(map->mini_map->map_width / 2 - 2 , map->mini_map->map_height / 2 - 2, angle,  ray_lenght(map, angle) * 20 /100 ,map->img);
        x++;
        // printf("%f\n", angle * 180  /M_PI);
        angle += ray_part;
    }
}