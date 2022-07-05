/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:47:17 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/04 16:58:52 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...);
void	devide_by_format(va_list ap, char *format, int *result);

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			ans;
	int			*result;

	ans = 0;
	result = &ans;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
			*result += ft_putchar(*format);
		else
		{
			devide_by_format(ap, (char *)format, result);
			format++;
		}
		format++;
	}
	va_end(ap);
	return (*result);
}

void	devide_by_format(va_list ap, char *format, int *result)
{
	if (!*(format + 1))
		return ;
	else if (*(format + 1) == 'c')
		*result += ft_putchar(va_arg(ap, int));
	else if (*(format + 1) == 's')
		*result += ft_putstr(va_arg(ap, char *));
	else if (*(format + 1) == 'p')
	{
		write (1, "0x", 2);
		*result += 2;
		ft_puthexa_pointer(va_arg(ap, unsigned long), result);
	}
	else if (*(format + 1) == 'd' || *(format + 1) == 'i')
		ft_putnbr_int(va_arg(ap, int), result);
	else if (*(format + 1) == 'u')
		ft_putnbr_uint(va_arg(ap, unsigned int), result);
	else if (*(format + 1) == 'x')
		ft_puthexa(va_arg(ap, unsigned int), result);
	else if (*(format + 1) == 'X')
		ft_put_uphexa(va_arg(ap, unsigned int), result);
	else if (*(format + 1) == '%')
		*result += ft_putchar('%');
}
