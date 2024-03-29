/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:57:40 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/20 17:38:22 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_read(char *file, t_game *g)
{
	int		fd;
	char	*line;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		print_error("Error\nwrong file\n");
	line = get_next_line(fd);
	g->height = 0;
	g->walk_count = 0;
	g->collect = 0;
	g->total_collect = 0;
	g->width = ft_strlen(line) - 1;
	g->one_line = ft_strdup2(line);
	free(line);
	while (line)
	{
		g->height++;
		line = get_next_line(fd);
		if (line)
			g->one_line = ft_strjoin2(g->one_line, line);
	}
	close(fd);
}

void	map_check_wall(t_game *g)
{
	int		i;

	i = 0;
	while (i < ft_strlen(g->one_line))
	{
		if (i < g->width)
		{
			if (g->one_line[i] != '1')
				print_error("Error\nMap must be surrounded by walls.\n");
		}
		else if (i % g->width == 0 || i % g->width == g->width - 1)
		{
			if (g->one_line[i] != '1')
				print_error("Error\nMap must be surrounded by walls.\n");
		}
		else if (i > ft_strlen(g->one_line) - g->width)
		{
			if (g->one_line[i] != '1')
				print_error("Error\nMap must be surrounded by walls.\n");
		}
		i++;
	}
}

void	map_check_parameter(t_game *g)
{
	int		i;
	int		e;
	int		p;

	i = 0;
	e = 0;
	p = 0;
	while (i < ft_strlen(g->one_line))
	{
		if (g->one_line[i] == 'E')
			e++;
		else if (g->one_line[i] == 'P')
			p++;
		else if (g->one_line[i] == 'C')
			g->total_collect++;
		i++;
	}
	if (e == 0)
		print_error("Error\nThere's no exit.\n");
	if (p != 1)
		print_error("Error\nThere's wrong player set.\n");
	if (g->total_collect == 0)
		print_error("Error\nThere's uncollectible.\n");
}

void	map_check(t_game *g)
{
	if (g->height * g->width != ft_strlen(g->one_line))
		print_error("Error\nIt's wrong to make mapping.\n");
	map_check_wall(g);
	map_check_parameter(g);
}
