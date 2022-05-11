#include "so_long.h"

t_img	img_init(void *mlx)
{
	t_img	init;
	int		w;
	int		h;

	init.background = mlx_xpm_file_to_image(mlx, "./images/background.xpm", &w, &h);
	init.player = mlx_xpm_file_to_image(mlx, "./images/player.xpm", &w, &h);
	init.obstacle = mlx_xpm_file_to_image(mlx, "./images/obstacle.xpm", &w, &h);
	init.point = mlx_xpm_file_to_image(mlx, "./images/point.xpm", &w, &h);
	init.goal = mlx_xpm_file_to_image(mlx, "./images/goal.xpm", &w, &h);
	return (init);
}

void	put_img(t_game *g, int w, int h)
{
	
}
