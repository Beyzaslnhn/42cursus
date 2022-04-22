/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <baslanha@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:31:53 by baslanha          #+#    #+#             */
/*   Updated: 2022/04/22 20:31:55 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_putchar(char str);
int		ft_putstr(char *c);
int		ft_putnbr(int a);
int		fun_ction(char a, va_list macro);
int		ft_printf(const char *str, ...);
int		ft_convert(size_t data, char *base);
int		ft_abs(int data);
size_t	ft_strlen(const char *s);

#endif
