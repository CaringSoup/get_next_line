/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 10:23:45 by gferreir          #+#    #+#             */
/*   Updated: 2018/06/29 12:50:53 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int main(int argc, char **argv)
{
	int		fd;
	int		fd2;
	int		i;
	char	*line;

	fd = open(argv[1], O_RDONLY);
	ft_putnbr(fd);
	fd2 = open(argv[2], O_RDONLY);
	ft_putnbr(fd2);
	i = 5;
//	while (i--)
//	{
//		get_next_line(fd, &line);
//		ft_putendl(line);
		get_next_line(fd2, &line);
		ft_putendl(line);
//	}
	close(fd);
	close(fd2);
	free(line);
	return (0);
}
