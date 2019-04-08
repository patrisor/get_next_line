/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:41:04 by patrisor          #+#    #+#             */
/*   Updated: 2019/04/07 19:36:55 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>


int		main(int argc, char **argv)
{
	char *line;
	int status;

	int fd1 = open(argv[1], O_RDONLY);
	int fd2 = open(argv[2], O_RDONLY);
	int fd3 = open(argv[3], O_RDONLY);


	status = get_next_line(fd1, &line);	
	printf("[%i] $> %s\n", status, line);	

	status = get_next_line(fd2, &line);	
	printf("[%i] $> %s\n", status, line);	

	status = get_next_line(fd3, &line);	
	printf("[%i] $> %s\n", status, line);	



	status = get_next_line(fd1, &line);	
	printf("[%i] $> %s\n", status, line);	

	status = get_next_line(fd2, &line);	
	printf("[%i] $> %s\n", status, line);	

	status = get_next_line(fd3, &line);	
	printf("[%i] $> %s\n", status, line);	



	status = get_next_line(fd1, &line);	
	printf("[%i] $> %s\n", status, line);	

	status = get_next_line(fd2, &line);	
	printf("[%i] $> %s\n", status, line);	

	status = get_next_line(fd3, &line);	
	printf("[%i] $> %s\n", status, line);	



	return (1);
}
