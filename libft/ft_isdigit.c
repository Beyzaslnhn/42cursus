/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:15:44 by baslanha          #+#    #+#             */
/*   Updated: 2022/02/18 11:47:31 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main ()
{
    int number = '3';
    int notanumber = '.';
    printf("%d\n%d",ft_isdigit(number),ft_isdigit(notanumber));
    return (0);
}
*/
