#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *ch, ...);
int	devide_by_format(va_list ap, char *format);

int main()
{
	long long		k;
	k = 1;
	ft_printf("abcd%skkk%ckjk\n","korea",'t');
	ft_printf("k1 = %p\n",&k);
	printf("k2 = %p\n",&k);
	ft_printf("%d\n",1234567);
	printf("%d\n",1234567);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		result;

	result = 0;
	va_start(ap,format);
	result = devide_by_format(ap, (char *)format);
	va_end(ap);
	return (0);
}

int	devide_by_format(va_list ap, char *format)
{
	int		result;
	char		c;
	char		*s;
	int			i;
	long long	l;

	result = 0;
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format,1);
			result++;
		}
		else
		{
			format++;
			if (!(*format))
				break ;
			else if (*format == 'c')
			{
				c = va_arg(ap, int);
				ft_putchar_fd(c, 1);
			}
			else if (*format == 's')
			{
				s = va_arg(ap, char *);
				while (*s)
					ft_putchar_fd(*s++,1);
			}
			else if (*format == 'p')
			{
				l = va_arg(ap, long long);
				write (1, "0x", 2);
				ft_puthexa(l);
			}
			else if (*format == 'd')
			{
				i = va_arg(ap, int);
				ft_putnbr_int(i);
			}
		}
		format++;
	}
	return (result);
	/*else if (c == 'u')

	else if (c == 'x')
	else if (c == 'X')
	else if (c == '%')
	*/
}
