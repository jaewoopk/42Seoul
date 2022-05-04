/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:18:58 by jaewopar          #+#    #+#             */
/*   Updated: 2022/04/28 21:12:33 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *ch, ...);
void	devide_by_format(va_list ap, char *format, int *result);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr(char *str);
int		ft_puthexa(unsigned int n);
int		ft_puthexa_pointer(unsigned long n);
int		ft_put_uphexa(unsigned int n);
int		ft_putnbr_int(int n);
int		ft_putnbr_uint(unsigned int n);

#endif
