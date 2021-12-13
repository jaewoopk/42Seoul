#include <stdio.h>
#include <unistd.h>

int main()
{
	int	fd;

	fd = open("test.txt", 0);
	close(fd);
	return (0);
}
