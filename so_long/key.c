/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:38:16 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/12 17:18:49 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	game_done(t_game *g)
{
	g->walk_count++;
	printf("%s %d%s", "All Clear! Total Steps :", g->walk_count, " Steps.\n");
	exit(0);
}

void	move_w(t_game *g)
{
	int		i;

	i = 0;
	while (i < ft_strlen(g->one_line))
	{
		if (g->one_line[i] == 'P')
			break ;
		i++;
	}
	if (g->one_line[i - g->width] == 'C')
		g->collect++;
	if (g->one_line[i - g->width] == 'E' && g->total_collect == g->collect)
		game_done(g);
	else if (g->one_line[i - g->width] != '1' && g->one_line[i - g->width] != 'E')
	{
		g->one_line[i] = '0';
		g->one_line[i - g->width] = 'P';
		g->walk_count++;
		printf("%d\n", g->walk_count);
		setting_img(g);
	}
}

void	move_a(t_game *g)
{
	int		i;

	i = 0;
	while (i < ft_strlen(g->one_line))
	{
		if (g->one_line[i] == 'P')
			break ;
		i++;
	}
	if (g->one_line[i - 1] == 'C')
		g->collect++;
	if (g->one_line[i - 1] == 'E' && g->total_collect == g->collect)
		game_done(g);
	else if (g->one_line[i - 1] != '1' && g->one_line[i - 1] != 'E')
	{
		g->one_line[i] = '0';
		g->one_line[i - 1] = 'P';
		g->walk_count++;
		printf("%d\n", g->walk_count);
		setting_img(g);
	}
}

void	move_s(t_game *g)
{
	int		i;

	i = 0;
	while (i < ft_strlen(g->one_line))
	{
		if (g->one_line[i] == 'P')
			break ;
		i++;
	}
	if (g->one_line[i + g->width] == 'C')
		g->collect++;
	if (g->one_line[i + g->width] == 'E' && g->total_collect == g->collect)
		game_done(g);
	else if (g->one_line[i + g->width] != '1' && g->one_line[i + g->width] != 'E')
	{
		g->one_line[i] = '0';
		g->one_line[i + g->width] = 'P';
		g->walk_count++;
		printf("%d\n", g->walk_count);
		setting_img(g);
	}
}

void	move_d(t_game *g)
{
	int		i;

	i = 0;
	while (i < ft_strlen(g->one_line))
	{
		if (g->one_line[i] == 'P')
			break ;
		i++;
	}
	if (g->one_line[i + 1] == 'C')
		g->collect++;
	if (g->one_line[i + 1] == 'E' && g->total_collect == g->collect)
		game_done(g);
	else if (g->one_line[i + 1] != '1' && g->one_line[i + 1] != 'E')
	{
		g->one_line[i] = '0';
		g->one_line[i + 1] = 'P';
		g->walk_count++;
		printf("%d\n", g->walk_count);
		setting_img(g);
	}
}
