#include "ft_printf.h"

int		ft_printf(const char *ch, ...);
void	devide_by_format(va_list ap, char *format, int *result);

int		ft_printf(const char *format, ...)
{
	va_list			ap;
	int				ans;
	int				*result;

	ans = 0;
	result = &ans;
	va_start(ap,format);
	devide_by_format(ap, (char *)format, result);
	va_end(ap);
	return (result);
}

void	devide_by_format(va_list ap, char *format, int *result)
{
	char			*s;

	while (*format)
	{
		if (*format != '%')
			*result += ft_putchar_fd(*format,1);
		else
		{
			if (!*(format + 1))
				break ;
			else if (*(format + 1) == 'c')
				*result += ft_putchar_fd(va_arg(ap, int), 1);
			else if (*(format + 1) == 's')
			{
				s = va_arg(ap, char *);
				if (!s)
				{
					write(1,"(null)",6);
					*result += 6;
				}
				while (*s)
					*result += ft_putchar_fd(*s++,1);
			}
			else if (*(format + 1) == 'p')
			{
				write (1, "0x", 2);
				*result += 2;
				*result += ft_puthexa_pointer(va_arg(ap, unsigned long));
			}
			else if (*(format + 1) == 'd' || *(format + 1) == 'i')
				*result += ft_putnbr_int(va_arg(ap,int));
			else if (*(format + 1) == 'u')
				*result += ft_putnbr_uint(va_arg(ap, unsigned int));
			else if (*(format + 1) == 'x')
				*result += ft_puthexa(va_arg(ap, unsigned int));
			else if (*(format + 1) == 'X')
				*result += ft_put_uphexa(va_arg(ap, unsigned int));
			else if (*(format + 1) == '%')
				*result += ft_putchar_fd("%", 1);
			format++;
		}
		format++;
	}
}

