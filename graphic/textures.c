/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:21:16 by ebelfkih          #+#    #+#             */
/*   Updated: 2023/12/28 17:44:02 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

uint32_t	get_rgba(int r, int g, int b, int a)
{
	return (r << 24 | g << 16 | b << 8 | a);
}

int get_r(int rgba)
{
    return ((rgba >> 24) & 0xFF);
}

int get_g(int rgba)
{
    return ((rgba >> 16) & 0xFF);
}

int get_b(int rgba)
{
    return ((rgba >> 8) & 0xFF);
}

int get_a(int rgba)
{
    return (rgba & 0xFF);
}