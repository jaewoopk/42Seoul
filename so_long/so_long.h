#ifndef SO_LONG_H
# define SO_LONG_H

# define X_EVENT_KEY_PRESS	2
# define X_EVENT_KEY_RELEASE 3
# define X_EVENT_KEY_RELEASE 17

# define KEY_ESC		53
# define KEY_W			13
# define KEY_A			0
# define KEY_S			1
# define KEY_D			2

# include "get_next_line.h"
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
	int		collect;
	int		count;
	int		walk_count;
}	t_game;


char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);

void	map_check(t_game *g);
void	map_check_parameter(t_game *g);
void	map_check_wall(t_game *g);
void	map_read(char *file, t_game *g);
#endif
