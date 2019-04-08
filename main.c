/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:41:04 by patrisor          #+#    #+#             */
/*   Updated: 2019/04/08 14:34:08 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int fd;
	int fd_2;
	int fd_3;
	char *line;
	int status;

	fd = open(argv[1], O_RDONLY);
	if((fd = open(argv[1], O_RDONLY)) < 3 && fd != 0)
		return -1;
	while((status = get_next_line(fd, &line)) == 1)
	{
		ft_putstr(line);
		ft_putchar('\n');
		free(line);
	}
	close(fd);
	fd_2 = open(argv[2], O_RDONLY);
	fd = fd_2;
	while((status = get_next_line(fd, &line)) == 1)
	{
		ft_putstr(line);
		ft_putchar('\n');
		free(line);
	}
	close(fd_2);
	fd_3 = open(argv[3], O_RDONLY);
	fd = fd_3;
	while((status = get_next_line(fd, &line)) == 1)
	{
		ft_putstr(line);
		ft_putchar('\n');
		free(line);
	}
	close(fd_3);
	return 1;
}
