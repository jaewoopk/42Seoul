/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:18:58 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/04 16:55:09 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *ch, ...);
void	devide_by_format(va_list ap, char *format, int *result);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_puthexa(unsigned int n, int *result);
int		ft_puthexa_pointer(unsigned long n, int *result);
int		ft_put_uphexa(unsigned int n, int *result);
int		ft_putnbr_int(int n, int *result);
int		ft_putnbr_uint(unsigned int n, int *result);

#endif
