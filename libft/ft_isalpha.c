/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:14:55 by baslanha          #+#    #+#             */
/*   Updated: 2022/02/18 11:42:11 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}
/*
#include <stdio.h>

int main ()
{
    int a = 'a';
    int b = 'B';
    int c = '.';
    printf("Harf: %d\nHarf: %d\nHarf Değil: %d", \
    ft_isalpha(a),ft_isalpha(b),ft_isalpha(c));
    return (0);
 }
*/
