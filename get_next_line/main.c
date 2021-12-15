#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line_utils.c"

size_t	ft_findEnter(char *buf)
{
	int		cnt;

	cnt = 0;
	while (*buf != 0 || *buf != '\n')
	{
		cnt++;
		buf++;
	}
	return (cnt);
}

int main()
{
	long			limit;
	int				fd;
	int				fd1;
	int				fd2;
	static int		cnt;

	cnt = 0;
	limit = sysconf(_SC_OPEN_MAX);
	printf("%ld File Descriptors can be used\n", limit);

	fd = open("test.txt",1);
	printf("%d fd return value\n",fd);
	close(fd);
	
	fd1 = open("test.txt",O_RDONLY);
	if (fd1 == -1)
		return (1);
	printf("fd1\t: %d\n",fd1);
	printf("\nDuplication\n");
	fd2 = dup2(fd1, 42);
	printf("fd1\t: %d\n",fd1);
	printf("fd2\t: %d\n",fd2);
	close(fd1);
	close(fd2);

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		printf("file open error\n");
	/*else
	{
		cnt = 0;
		buf = get_next_line(fd);
		printf("%s\n",buf);
		close(fd);
	}*/
	return (0);
}
