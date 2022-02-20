/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:14:06 by baslanha          #+#    #+#             */
/*   Updated: 2022/02/16 12:14:08 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main ()
{
    int num = '3';
    int al = 'x';
    int notalnum = '.';
    printf("%d\n%d\n%d", ft_isalnum(num), ft_isalnum(al), ft_isalnum(notalnum));
    return (0);
}
*/
