#include "minilibx-linux/mlx.h"
#include <stdlib.h>

#define WIDTH 1000
#define HEIGHT 800

int	main(void)
{
	void	*mlx_connection;
	void	*mlx_window;

	mlx_connection = mlx_init();
	mlx_window = mlx_new_window(mlx_connection, WIDTH, HEIGHT, "first_window");
	for (int x = WIDTH * 0.1; x < WIDTH * 0.9; x++)
		for (int y = HEIGHT * 0.1; y < HEIGHT * 0.9; y++)
			mlx_pixel_put(mlx_connection, mlx_window, x, y, x * y);
	mlx_string_put(mlx_connection, mlx_window, WIDTH * 0.8, HEIGHT * 0.95, rand() % 0x1000000, "Nameless");
	mlx_loop(mlx_connection);
	return (0);
}