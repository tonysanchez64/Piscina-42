/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emercade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:47:28 by emercade          #+#    #+#             */
/*   Updated: 2023/06/21 12:31:34 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>

int	ft_atoi(char *str);

int	open_file(char *map)

{
	int	fd;

	fd = open(map, O_RDONLY);
	return (fd);
}

int	*check_map_data(char *map)
{
	int	rows;
	int	col;
	int	i;
	int	map_data[2];

	rows = ft_atoi(map);
	i = 5;
	col = 0;
	while (map[i] != '\n')
	{
		i++;
		col++;
	}
	map_data[0] = rows;
	map_data[1] = col;
	return (map_data);
}

char *check_map_char(char *map)
{
	char map_char[3];

	map_char[0] = map[1];
	map_char[1] = map[2];
	map_char[2] = map[3];
	return(map_char);
}
