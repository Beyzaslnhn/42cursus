/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:32:29 by baslanha          #+#    #+#             */
/*   Updated: 2022/02/16 12:32:30 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c += 'A' - 'a';
	return (c);
}
/*
#include <stdio.h>
int main ()
{
    int alph = 'b';
    int notalph = '.';
    printf("%c\n%c",ft_toupper(alph), ft_toupper(notalph));
    return (0);
}
*/
