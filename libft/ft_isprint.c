/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:16:05 by baslanha          #+#    #+#             */
/*   Updated: 2022/02/18 11:48:48 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main ()
{
    int print = 'x';
    int notprint = 30;
    printf("%d\n%d",ft_isprint(print),ft_isprint(notprint));
    return (0);
}
*/
