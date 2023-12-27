/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 07:40:45 by ybouchra          #+#    #+#             */
/*   Updated: 2023/12/27 21:16:13 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void print_map(char **map)
{
    int i = 0;
    if(!map || !map[0])
        ft_puterr("Error: Empty Map !!");
    else
    {
        while(map[i])
        printf("%s\n", map[i++]);
    }
}

void ft_puterr(char *str)
{
    while(*str)
        write(2, str++, 1);
    write(2,"\n",2);
    exit(1);
}

int is_exist(char *str, int c)
{
    int i;
    
    i = 0;
    if(!str || !str[0])
        return(0);
    while(str[i])
    {
        if(str[i] == c)
            return(1);
        i++;
    }
    return(0);
}


int nbr_item(char *s, char c)
{
    int i;
    int cp;
    
    cp = 0;
    i = -1;
    if(!s)
        return 0;
    while(s[++i])
    {
        if(s[i] == c)
            cp++;
    }
    return(cp);
}

int is_digit(char *arr)
{
    int i;

    i = 0;
    if(!arr || !arr[0])
        return(0);
    if(arr[0] == '+')
        i++;
    while(arr[i])
    {
        if(!(arr[i] >= '0' && arr[i] <= '9'))
            return(0);
    i++;
    }
    return(1); 
}