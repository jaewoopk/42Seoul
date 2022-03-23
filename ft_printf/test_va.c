#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int	sum(int count, ...)
{
	int	res = 0;
	va_list ap;
	int i;

	va_start(ap,count);

	for (i = 0; i < count; i++)
		res += va_arg(ap, int);
	va_end(ap);
	return (res);
}

void	printf_string(int args, ...)
{
	va_list ap;

	va_start(ap,args);
	for (int i = 0; i < args; i++)
	{
		char *str = va_arg(ap, char *);
		printf("%s ",str);
	}
	va_end(ap);

	printf ("\n");
}
int	main(void)
{
	printf("%d\n", sum(10,1,2,3,4,5,6,7,8,9,10));
	printf_string(2, "C", "Language");
	printf_string(3, "the", "Little", "prince");
	return (0);
}
