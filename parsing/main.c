/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:41:23 by ybouchra          #+#    #+#             */
/*   Updated: 2023/12/27 21:17:03 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"



int main(int ac, char **av)
{
    t_map map;
    t_player player;
    t_info info;
    t_mlx mlx;

    if(ac == 2)
     {  
        ft_bzero(&info, sizeof(info));
        ft_bzero(&map, sizeof(map));
        ft_bzero(&player, sizeof(player));
        check_extention(av[1]);
        read_file(av[1], &info);
        check_file(&info, &map);
        check_map(&map, &info);
        init_info(&info, &map, &player, &mlx);
        free_clr(&info);
        ft_clearr(map.map);
     }
     else
        write(2, "Error: incorrect syntax", 24);
    // while(1);
}
