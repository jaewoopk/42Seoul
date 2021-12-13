#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	long	limit;
	int		fd;
	int		fd1;
	int		fd2;
	char	buf[BUFFER_SIZE];

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
	else
	{
		read(fd, buf, sizeof(buf));
		printf("%s\n",buf);
		close(fd);
	}
	return (0);
}
