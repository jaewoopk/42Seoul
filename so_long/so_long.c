/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:19:11 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/12 15:19:13 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_error(char *s)
{
	printf("%s",s);
	exit(0);
}

void	init_game(t_game *g, char *map)
{
	g->mlx = mlx_init();
	g->img = img_init(g->mlx);
	map_read(map, g);
	map_check(g);
	g->win = mlx_new_window(g->mlx, g->width * 64, g->height * 64, "so_long");
	setting_img(g);
}

void	exit_game(t_game *g)
{
	mlx_destoy_window(g->mlx, g->win);
	exit(0);
}

int	press_key(int key, t_game *g)
{
	if (key == KEY_ESC)
		exit_game(g);
	if (key == KEY_W)
		move_w(g);
	if (key == KEY_S)
		move_s(g);
	if (key == KEY_A)
		move_a(g);
	if (key == KEY_D)
		move_d(g);
	return (0);
}

int main(int argc, char *argv[])
{
	t_game	*game;

	if (argc != 2)
		print_error("There's wrong input.\n");
	game = (t_game *)malloc(sizeof(t_game));
	init_game(game, argv[1]);
	mlx_hook(game->win, X_EVENT_KEY_PRESS, 0, &press_key, game);	
	mlx_hook(game->win, X_EVENT_KEY_EXIT, 0, &exit_game, game);
	mlx_loop(game->mlx);
	return (0);
}
