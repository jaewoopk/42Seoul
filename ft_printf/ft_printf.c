#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *first, ...);

int	main(void)
{
	ft_printf("abcd%c",'e');
	return (0);
}

int	ft_printf(const char *first, ...)
{
	va_list	ap;

	va_start(ap,first);
	while(*first)
	{
		if (*first != '%')
		{
			ft_putchar_fd(*first,1);
			first++;
		}
		else
			break ;
	}
	va_end(ap);
	return (0);
}
