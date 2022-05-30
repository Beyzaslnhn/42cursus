/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Baslanha <baslanha@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:24:06 by Baslanha          #+#    #+#             */
/*   Updated: 2022/05/30 15:24:09 by Baslanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(char *buf);
char	*get_next_line(int fd);
char	*get_new_line(char *buffer);
char	*first_line(int fd, char *buffer);
char	*strjoin(char *buffer, char *new_buffer);
char	*get_new_buffer(char *buffer);
int		find_nl_char(char *buffer);

#endif
