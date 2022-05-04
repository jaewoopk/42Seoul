#include <stdio.h>

int main(void)
{
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(int *));
	printf("%lu\n", sizeof(double));
	printf("%lu\n", sizeof(char *));
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(va_list));
	return (0);
}
