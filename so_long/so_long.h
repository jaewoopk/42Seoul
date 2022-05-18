/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:19:22 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/18 19:03:13 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define X_EVENT_KEY_PRESS	2
# define X_EVENT_KEY_RELEASE 3
# define X_EVENT_KEY_EXIT 17

# define KEY_ESC		53
# define KEY_W			13
# define KEY_A			0
# define KEY_S			1
# define KEY_D			2

# include "get_next_line.h"
# include <stdio.h>
# include <fcntl.h>
# include <mlx.h>

typedef struct s_param
{
	int	x;
	int	y;
}	t_param;

typedef struct s_img
{
	void	*play;
	void	*back;
	void	*obs;
	void	*obs2;
	void	*point;
	void	*goal;
}	t_img;

typedef struct s_game
{
	void	*mlx;
	void	*win;
	t_img	img;
	int		width;
	int		height;
	char	*one_line;
	int		collect;
	int		total_collect;
	int		walk_count;
}	t_game;

char	*ft_strjoin2(char *s1, char *s2);
void	*ft_memmove(void *dst, const void *src, int len);
int		ft_strlcat(char *dst, const char *src, int dstsize);
char	*ft_strdup2(const char *s1);

void	map_check(t_game *g);
void	map_check_parameter(t_game *g);
void	map_check_wall(t_game *g);
void	map_read(char *file, t_game *g);

int		game_done(t_game *g);
void	move_w(t_game *g);
void	move_a(t_game *g);
void	move_s(t_game *g);
void	move_d(t_game *g);

t_img	init_img(void *mlx);
void	put_img(t_game *g, int w, int h);
void	setting_img(t_game *g);

void	print_error(char *s);
void	init_game(t_game *g, char *map);
int		exit_game(t_game *g);
int		press_key(int key, t_game *g);
#endif
