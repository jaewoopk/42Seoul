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
		printf("%s %lu",str,sizeof(char *));
	}
	va_end(ap);

	printf ("\n");
}

void	test_printf()
{
	int a = 3,b = 7, c = -10;
	int *p = &a;
	char	ch = 't';
	char	*ps = &ch;

	printf("%c %c %c\n",'a','b','c');
	printf("%s %s\n","play tennis"," is fun!");
	printf("%p %p %p %p\n",&a,&p,&c,&ps);
	printf("%d %d %d\n",a,b,c);
	printf("%i %i %i\n",a,b,c);
	c = 590;
	printf("%u %u %u\n",a,b,c);
	printf("%x %x %x\n",a,b,c);
	printf("%X %X %X\n",a,b,c);
	printf("%% %% %%\n");
}
int	main(void)
{
	printf("%d\n", sum(10,1,2,3,4,5,6,7,8,9,10));
	printf_string(2, "C", "Language");
	printf_string(3, "the", "Little", "prince");
	test_printf();
	return (0);
}
