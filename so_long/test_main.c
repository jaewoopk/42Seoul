#include <mlx.h>

int main(void)
{
	void *mlx;
	void *win;
	void *img;
	void *img2;
	void *img3;
	int img_width;
	int img_height;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 500, 500, "my_mlx");
	img = mlx_xpm_file_to_image(mlx, "./images/background.xpm", &img_width, &img_height);
	img2 = mlx_xpm_file_to_image(mlx, "./images/player.xpm", &img_width, &img_height);
	img3 = mlx_xpm_file_to_image(mlx, "./images/obstacle.xpm", &img_width, &img_height);
	mlx_put_image_to_window(mlx, win, img, 0, 0);
	mlx_put_image_to_window(mlx, win, img, 0, 128);
	mlx_put_image_to_window(mlx, win, img, 128, 0);
	mlx_put_image_to_window(mlx, win, img, 128, 128);
	mlx_put_image_to_window(mlx, win, img, 0, 256);
	mlx_put_image_to_window(mlx, win, img, 256, 0);
	mlx_put_image_to_window(mlx, win, img, 128, 256);
	mlx_put_image_to_window(mlx, win, img, 256, 128);
	mlx_put_image_to_window(mlx, win, img, 256, 256);
	mlx_put_image_to_window(mlx, win, img3, 0, 0);
	mlx_put_image_to_window(mlx, win, img3, 128, 0);
	mlx_put_image_to_window(mlx, win, img3, 256, 0);
	mlx_put_image_to_window(mlx, win, img3, 0, 320);
	mlx_put_image_to_window(mlx, win, img3, 128, 320);
	mlx_put_image_to_window(mlx, win, img3, 256, 320);
	mlx_put_image_to_window(mlx, win, img2, 180,180);
	//mlx_put_image_to_window(mlx, win, img4, 256, 128);
	mlx_loop(mlx);
	return (0);
}
