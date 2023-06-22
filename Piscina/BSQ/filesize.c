/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filesize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emercade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:09:03 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/21 13:14:57 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
int	open_file(char *map);

int	ft_filesize(char *dict)
{
	char	buf[1];
	ssize_t	numbytes;
	off_t	filesize;
	int		fd;

	filesize = 0;
	fd = open(dict, O_RDONLY);
	if (fd == -1)
		write(1, "Error1\n", 7);
	while ((numbytes = read(fd, buf, sizeof(buf))) > 0)
		filesize = filesize + numbytes;
	if (numbytes == -1)
	{
		write(1, "Error2\n", 7);
		close(fd);
	}
	close(fd);
	return (filesize);
}

char *save_map(char *map)
{
	char	*filecontent;
	ssize_t	fdread;
	off_t	filesize;
	int		fd;

	filesize = ft_filesize(map);
	filecontent = (char *)malloc(filesize);
	fd = open_file(map);
	if (fd == -1)
		write(1, "Error1\n", 7);
	fdread = read(fd, filecontent, filesize);
	if (fdread == -1)
    {
       write(1, "Error2\n", 7);
        close(fd);
    }
	close(fd);
	return (filecontent);
}
