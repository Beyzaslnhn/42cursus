/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:18:49 by baslanha          #+#    #+#             */
/*   Updated: 2022/02/18 12:07:17 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ss;
	size_t			count;

	ss = (unsigned char *)b;
	count = 0;
	while (count < len)
		ss[count++] = c;
	return (b);
}
/*
#include <stdio.h>
int main(void)
{
    char b[] = "araba";
    printf("%s", ft_memset(b, 'a', 3));
}*/
