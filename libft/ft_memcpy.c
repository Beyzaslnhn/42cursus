/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:17:58 by baslanha          #+#    #+#             */
/*   Updated: 2022/02/18 12:02:08 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	d = (char *)dst;
	s = (const char *)src;
	while (n--)
		d[n] = (const char)s[n];
	return (dst);
}
/*
#include <stdio.h>

int main ()
{
    char src[] = "beyzanuraslanhan";
    char dest[] = "nuraslanhan";
    ft_memcpy(dest,src,11);
    printf("%s",dest);
    return (0);
}
*/
