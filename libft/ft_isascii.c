/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:15:19 by baslanha          #+#    #+#             */
/*   Updated: 2022/02/16 12:15:21 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main ()
{
    int ascii = '5';
    int notascii = 138;
    printf("%d\n%d",ft_isascii(ascii),ft_isascii(notascii));
    return (0);
}
*/
