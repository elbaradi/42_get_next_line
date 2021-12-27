/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tel-bara <tel-bara@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 13:25:20 by tel-bara      #+#    #+#                 */
/*   Updated: 2021/12/27 14:29:29 by tel-bara      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int			main(int argc, char **argv)
{
	int		fd;
	char	*line = 0;
	int		ret;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		printf("failed to open file \n");
	if (fd == -1)
		return (0);
	while ((ret = get_next_line(fd, &line)) && argc)
	{
		// printf("%d: ", ret); // uncomment to test for correct return value (1 if no error)
		printf("%s\n", line);
		free(line);
	}
	// printf("%d: ", ret); // uncomment to test for correct return value (0 if end of file)
	printf("%s\n", line);
	free(line);
	return (0);
}
