/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baslanha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:20:09 by baslanha          #+#    #+#             */
/*   Updated: 2022/02/18 12:12:09 by baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	n;

	n = 0;
	if (!fd || !s)
		return ;
	while (s[n])
		ft_putchar_fd(s[n++], fd);
	ft_putchar_fd('\n', fd);
}
/*#include <stdio.h>
#include <fcntl.h>
int main()
{
    int fd3 = open("beyza.txt", O_CREAT | O_WRONLY,777);
    ft_putchar_fd('a', fd3);
}*/
