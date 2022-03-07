#include "ft_printf.h"

int	ft_printf(const char *first, ...);

int	main(void)
{
	ft_printf("alaltodl\n");
	return (0);
}

int	ft_printf(const char *first, ...)
{
	va_list	ap;

	va_start(ap,first);
	for (int i = 0; i < ft_strlen(first); i++)
	{
		char	c;
		c = va_arg(ap, int);
	}
	va_end(ap);
	return (0);
}
