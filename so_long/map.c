#include "so_long.h"

void	map_read(char *file, t_game *g)
{
	int		fd;
	char	*line;

	fd = open(file, 0_RDONLY);
	line = get_next_line(fd);
	g->height = 0;
	g->walk_count = 0;
	g->width = ft_strlen(line) - 1;

}
