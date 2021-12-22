#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char			*tmp;
	char				buf[BUFFER_SIZE + 1];
	static size_t		i;
	static size_t		cut;

	if (fd < 0)
		return (0);
	read(fd, buf, BUFFER_SIZE);
	buf[BUFFER_SIZE] = '\0';
	while (1)
	{
		if (buf[i] == '\n' || buf[i] == 0)
			break;
		i++;
	}
	tmp = (char *)malloc(sizeof(char) * (i + 1 - cut));
	if (!tmp)
		return (0);
	ft_strlcpy(tmp, buf + cut, i + 1 - cut);
	if (!tmp)
		return (0);
	i++;
	cut = i;
	return (tmp);
}
