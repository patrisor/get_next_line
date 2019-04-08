/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 15:51:43 by patrisor          #+#    #+#             */
/*   Updated: 2019/04/07 14:03:54 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1

# include "fcntl.h"
# include "unistd.h"
# include "stdlib.h"
# include "libft.h"
# include "sys/types.h"
# include "sys/uio.h"

int		get_next_line(const int fd, char **line);
int		ft_new_line(char **s, char **line, int fd, int bytes);

#endif
