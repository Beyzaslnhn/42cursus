/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <baslanha@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:31:27 by baslanha          #+#    #+#             */
/*   Updated: 2022/04/22 20:31:38 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fun_ction(char a, va_list macro)
{
	if (a == 'c')
		return (ft_putchar(va_arg(macro, int)));
	if (a == 's')
		return (ft_putstr(va_arg(macro, char *)));
	if (a == 'p')
	{
		ft_putstr("0x");
		return (ft_convert(
				va_arg(macro, unsigned long), "0123456789abcdef") + 2);
	}
	if (a == 'u')
		return (ft_convert(va_arg(macro, unsigned int), "0123456789"));
	if (a == '%')
		return (ft_putchar('%'));
	if (a == 'd' || a == 'i')
		return (ft_abs(va_arg(macro, int)));
	if (a == 'x')
		return (ft_convert(va_arg(macro, unsigned int), "0123456789abcdef"));
	if (a == 'X')
		return (ft_convert(va_arg(macro, unsigned int), "0123456789ABCDEF"));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	macro;
	int		a;
	int		b;

	va_start(macro, str);
	a = 0;
	b = 0;
	while (str[a])
	{
		if (str[a] == '%')
		{
			b += fun_ction(str[a + 1], macro);
			a++;
		}
		else
			b += write(1, &str[a], 1);
		a++;
	}
	va_end(macro);
	return (b);
}
/*#include <stdio.h>
int main ()
{
    ft_printf("%d %x %X %s", 34, 675, 56547890, "464e5hd");
}*/
