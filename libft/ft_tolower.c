/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:32:07 by baslanha          #+#    #+#             */
/*   Updated: 2022/02/16 12:32:09 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';
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
