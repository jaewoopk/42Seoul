#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *first, ...);

int	main(void)
{
	char	a='a',b='b',c='c',d='d';
	ft_printf("%c%c%c%c",a,b,c,d);
	return (0);
}

int	ft_printf(const char *first, ...)
{
	va_list	ap;

	printf("%p\n",&first);	
	va_start(ap,first);
	printf("%p\n",&ap);
	for (int i = 0; i < (int)ft_strlen(first); i++)
	{
		char	c;
		c = (char)va_arg(ap, int);
		printf("%c\n",c);
	}
	va_end(ap);
	return (0);
}
