/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 17:17:32 by mstupnik          #+#    #+#             */
/*   Updated: 2019/10/09 13:23:06 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int				main(int argc, char **argv)
{
	int			fd;
	char		*line;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		get_next_line(fd, &line);
		printf("%s", line);
		get_next_line(fd, &line);
		printf("%s", line);
		close(fd);
	}
	return (0);
}
