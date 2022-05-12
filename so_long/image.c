/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:19:31 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/12 20:39:48 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_img	init_img(void *mlx)
{
	t_img	init;
	int		w;
	int		h;

	init.back = mlx_xpm_file_to_image(mlx, "./images/back.xpm", &w, &h);
	init.play = mlx_xpm_file_to_image(mlx, "./images/play.xpm", &w, &h);
	init.obs = mlx_xpm_file_to_image(mlx, "./images/obs.xpm", &w, &h);
	init.point = mlx_xpm_file_to_image(mlx, "./images/point.xpm", &w, &h);
	init.goal = mlx_xpm_file_to_image(mlx, "./images/goal.xpm", &w, &h);
	return (init);
}

void	put_img(t_game *g, int w, int h)
{
	if (g->one_line[h * g->width + w] == '1')
		mlx_put_image_to_window(g->mlx, g->win, g->img.obs, w * 64, h * 64);
	else if (g->one_line[h * g->width + w] == 'P')
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.back, w * 64, h * 64);
		mlx_put_image_to_window(g->mlx, g->win, g->img.play, w * 64, h * 64);
	}
	else if (g->one_line[h * g->width + w] == 'C')
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.back, w * 64, h * 64);
		mlx_put_image_to_window(g->mlx, g->win, g->img.point, w * 64, h * 64);
	}
	else if (g->one_line[h * g->width + w] == 'E')
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.back, w * 64, h * 64);
		mlx_put_image_to_window(g->mlx, g->win, g->img.goal, w * 64, h * 64);
	}
	else
		mlx_put_image_to_window(g->mlx, g->win, g->img.back, w * 64, h * 64);
}

void	setting_img(t_game *g)
{
	int		h;
	int		w;

	h = 0;
	while (h < g->height)
	{
		w = 0;
		while (w < g->width)
		{
			put_img(g, w, h);
			w++;
		}
		h++;
	}
}