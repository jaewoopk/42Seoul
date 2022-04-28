#include "ft_printf.h"

int	ft_printf(const char *ch, ...);
int	devide_by_format(va_list ap, char *format);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		result;

	result = 0;
	va_start(ap,format);
	result = devide_by_format(ap, (char *)format);
	va_end(ap);
	return (result);
}

int	devide_by_format(va_list ap, char *format)
{
	char			*s;
	int				result;
	int				k;

	result = 0;
	k = 0;
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
				result += ft_putchar_fd(va_arg(ap, int), 1);
			else if (*format == 's')
			{
				s = va_arg(ap, char *);
				if (!s)
				{
					write(1,"(null)",6);
					result += 6;
				}
				while (*s)
					result += ft_putchar_fd(*s++,1);
			}
			else if (*format == 'p')
			{
				write (1, "0x", 2);
				result += 2;
				result += ft_puthexa_pointer(va_arg(ap, unsigned long));
			}
			else if (*format == 'd' || *format == 'i')
			{
				result -= k;
				k = ft_putnbr_int(va_arg(ap,int));
				result += k;
			}
			else if (*format == 'u')
			{
				result -= k;
				k = ft_putnbr_uint(va_arg(ap, unsigned int));
				result += k;
			}
			else if (*format == 'x')
				result += ft_puthexa(va_arg(ap, unsigned int));
			else if (*format == 'X')
				result += ft_put_uphexa(va_arg(ap, unsigned int));
			else if (*format == '%')
			{
				write (1, "%", 1);
				result++;
			}
		}
		format++;
	}
	return (result);
}

