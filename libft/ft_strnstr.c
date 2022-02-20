/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:30:03 by baslanha          #+#    #+#             */
/*   Updated: 2022/02/18 12:44:52 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	nlen;

	if (!(*needle))
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= nlen)
	{
		i = 0;
		while (needle[i] == haystack[i])
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)(haystack));
		}
		haystack++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main ()
{
    char a[] = "belkiüstümüzdenbirkuşgeçer";
    char b[] = "bir";
    printf("%s",ft_strnstr(a,b,16));
}*/
