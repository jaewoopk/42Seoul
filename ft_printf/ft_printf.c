#include "ft_printf.h"
#include <string.h>
#include <stdio.h>

int	ft_printf(const char *first, ...);

int	main(void)
{
	ft_printf("abcdefg",'a','b','c','d');
	return (0);
}

int	ft_printf(const char *first, ...)
{
	va_list	ap;

	printf("%p\n",&first);	
	printf("%p\n",&first + 1);
	va_start(ap,first);
	printf("%p\n",&ap);
	for (int i = 0; i < strlen(first); i++)
	{
		char	c;
		c = va_arg(ap, int);
		printf("%c\n",c);
	}
	va_end(ap);
	return (0);
}
