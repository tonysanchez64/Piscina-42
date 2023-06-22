/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emercade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:01:40 by emercade          #+#    #+#             */
/*   Updated: 2023/06/21 13:16:39 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	first_row_is_valid(char *map)
{
	int	i;
	int	j;
	int	row;

	i = 1;
	row = ft_atoi(map);
	if (row < 1)
		return (0);
	while (i < 4)
	{
		if (map[i] < 32 || map[i] > 126)
			return (0);
		j = i + 1;
		while (j < 4)
		{
			if (map[i] == map[j])
				return (0);
			j++;
		}
		i++;
	}
	if (map[4] != '\n')
		return (0);
	return (1);
}

int	check_newlines(char *map)
{
	int	i;
	int	rows;
	int	newlines;

	i = 5;
	newlines = 0;
	rows = ft_atoi(map);
	while (map[i])
	{
		if (map[i] == '\n')
			newlines++;
		i++;
	}
	if (rows != newlines)
		return (0);
	return (1);
}

int	rows_are_equal(char *map)
{
	int	i;
	int	len1;
	int	len2;

	i = 5;
	len1 = 0;
	while (map[i] != '\n')
	{
		i++;
		len1++;
	}
	while (map[++i])
	{
		len2 = 0;
		while (map[i] != '\n')
		{
			len2++;
			i++;
		}
		if (len1 != len2)
			return (0);
	}
	return (1);
}

int	map_is_valid(char *map)
{
	int	i;

	i = 5;
	if (!(first_row_is_valid(map) && check_newlines(map)
			&& rows_are_equal(map)))
		return (0);
	while (map[i])
	{
		if (map[i] != map[1] && map[i] != map[2] && map[i] != map[3]
				&& map[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}
