/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:19:11 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/20 16:21:04 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_error(char *s)
{
	printf("%s", s);
	exit(0);
}

void	init_game(t_game *g, char *map)
{
	g->mlx = mlx_init();
	g->img = init_img(g->mlx);
	map_read(map, g);
	map_check(g);
	g->win = mlx_new_window(g->mlx, g->width * 64, g->height * 64, "so_long");
	setting_img(g);
}

int	exit_game(t_game *g)
{
	mlx_destroy_window(g->mlx, g->win);
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

int	main(int argc, char *argv[])
{
	t_game	*game;

	if (argc != 2)
		print_error("Error\nThere's wrong input.\n");
	else if (argv[1][ft_strlen(argv[1]) - 3] != 'b')
		print_error("Error\nmap was not consisted of ber\n");
	else if (argv[1][ft_strlen(argv[1]) - 2] != 'e')
		print_error("Error\nmap was not consisted of ber\n");
	else if (argv[1][ft_strlen(argv[1]) - 1] != 'r')
		print_error("Error\nmap was not consisted of ber\n");
	game = (t_game *)malloc(sizeof(t_game));
	init_game(game, argv[1]);
	mlx_hook(game->win, X_EVENT_KEY_PRESS, 0, &press_key, game);
	mlx_hook(game->win, X_EVENT_KEY_EXIT, 0, &exit_game, game);
	mlx_loop(game->mlx);
	return (0);
}
