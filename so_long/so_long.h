#ifndef SO_LONG_H
# define SO_LONG_H

# define X_EVENT_KEY_PRESS	2
# define X_EVENT_KEY_RELEASE 3

# define KEY_ESC		53
# define KEY_W			13
# define KEY_A			0
# define KEY_S			1
# define KEY_D			2

# include <unistd.h>
# include <stdio.h>
# include <mlx.h>

typedef struct s_param
{
	int	x;
	int	y;
}	t_param;

typedef struct s_img
{
	void	*player;
	void	*background;
	void	*obstacle;
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
	int		col;
	int		count;
	int		walk_count;
}	t_game;

#endif
