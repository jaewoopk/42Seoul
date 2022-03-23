#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *first, ...);
void	ft_format(char c, void *args);

int	main(void)
{
	ft_printf("abcd%c",'e');
	return (0);
}

int	ft_printf(const char *ch, ...)
{
	va_list	ap;
	void	*args;

	va_start(ap,ch);
	while(*ch)
	{
		if (*ch != '%')
		{
			ft_putchar_fd(*ch,1);
			ch++;
		}
		else
		{
			ch++;
			args = va_arg(ap, void *);
			ft_format(*ch++,args);
		}
	}
	va_end(ap);
	return (0);
}

void	ft_format(char c, void *args)
{
	if (c == 'c')
	{
		ft_putchar_fd((char)*args,1);
	}
	else if (c == 's')
	{
		while ((char)*args)
		{
			ft_putchar_fd((char)*args,1);
			args++;
		}
	}
	else if (c == 'p')
	{
		char	*ptr;
		ptr = (char *)malloc(sizeof(char) * (ft_strlen((char*)&args) + 1));
		if (!ptr)
			return ;
		
	}
	else if (c == 'd')
	else if (c == 'i')
	else if (c == 'u')

	else if (c == 'x')
	else if (c == 'X')
	else if (c == '%')
}
