/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emercade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:19:32 by emercade          #+#    #+#             */
/*   Updated: 2023/06/21 14:08:19 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	**start_matrix(char *map, int *map_data)
{
	int		i;
	int		x;
	int		y;
	char	**matrix;

	matrix = (char **)malloc(sizeof(char *) * map_data[0]);
	if (matrix == 0)
		return (0);
	i = 5;
	x = 0;
	y = 0;
	while (x < map_data[0])
	{
		matrix[x] = (char *)malloc(sizeof(char) * map_data[1]);
		if (matrix[x] == 0)
		{
			while (y < x)
				free(matrix[y]);
			free(matrix);
			return (0);
		}
		x++;
	}
	x = 0;
	while (x < map_data[0])
	{
		y = 0;
		while (y < map_data[1])
		{
			matrix[x][y] = map[i];
			y++;
			i++;
		}
		x++;
		i++;
	}
	return (matrix);
}
