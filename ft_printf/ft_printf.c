#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *first, ...);
void	ft_format(char c, va_list ap);

int	main(void)
{
	long long		k;
	k = 1;
	ft_printf("abcd%skkk%ckjk\n","korea",'t');
	ft_printf("k my memory = %p\n",&k);
	printf("k real memory = %p\n",&k);
	ft_printf("%d\n",1234567);
	printf("%d\n",1234567);
	return (0);
}

int	ft_printf(const char *ch, ...)
{
	va_list	ap;

	va_start(ap,ch);
	while(*ch)
	{
		if (*ch != '%')
			write(1, ch++, 1);
		else
		{
			ch++;
			printf("real memory %c = %p\n",*ch, ap);
			ft_format(*ch++,ap);
		}
	}
	va_end(ap);
	return (0);
}

void	ft_format(char c, va_list ap)
{
	long long		memory;

	if (c == 'c')
	{
		va_arg(ap, char *);
		write(1, ap, 1);
	}
	else if (c == 's')
	{
		va_arg(ap, char *);
		printf("ap memory = %p\n",&ap);
		for (int i = 0; i < 5; i++)
		{
			write(1, (ap+i), 1);
		}
	}
	else if (c == 'p')
	{
		va_arg(ap, long long);
		printf("ap memory = %p\n",&ap);
		memory = (long long)ap;
		write (1, "0x", 2);
		ft_puthexa(memory);
	}
	else if (c == 'd')
	{
		printf("ap memory = %p\n",&ap);
		va_arg(ap, int);
		printf("ap memory = %p\n",&ap);
		ft_putnbr_int((int)ap);
	}
	/*
	else if (c == 'i')
	else if (c == 'u')

	else if (c == 'x')
	else if (c == 'X')
	else if (c == '%')
	*/
}
