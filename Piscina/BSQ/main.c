/* ************************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emercade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:29:23 by emercade          #+#    #+#             */
/*   Updated: 2023/06/21 14:08:03 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char    **start_matrix(char *map);

char *save_map(char *map);

int	main(int argc, char **argv)
{
	char	*map;
	int		map_data[2];
	char	map_char[3];


	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	map = save_map(argv[1]);
	map_data = check_map_data(argv[1]);
	map_char = check_map_char(argv[1]);
	if (map_is_valid(map) == 1)
	{
		solution(find_solution(start_matrix(map, map_data), map_data), map_char, map_data);
	}
	free(map);
	return (0);
}
/*int	main(int ac, char **av)
{	
	char	**m;
	
	m = start_matrix(save_map(av[1]));
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; i < 27; j++)
		{
			printf("%c ",  m[i][j]);
		}
		printf("\n");
	}
	return (0);
}*/
