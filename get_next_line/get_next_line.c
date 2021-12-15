#include "get_next_line.h"

size_t	ft_findNewline(int fd)
{
	size_t		i;
	char		buff[BUFFER_SIZE];

	i = 1;
	while (1)
	{
		read(fd, buff, 1);
		if (*buff == '\n' || *buff == 0)
			return (i);
		i++;
	}
	return (i);
}

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE];
	char		*tmp;

	if (fd < 0)
		return (0);
	tmp = (char *)malloc(sizeof(char) * ft_findNewline(fd) + 1);
	read(fd, buf, ft_findNewline(fd));
	ft_strlcpy(tmp, buf, ft_findNewline(fd) + 1);
	return (tmp);
}
