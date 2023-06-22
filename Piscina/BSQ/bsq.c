/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antosanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 09:04:22 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/21 14:08:14 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	num_min(int num1, int num2, int num3)
{
	if (num1 < num2 && num1 < num3)
		return (num1);
	else if (num2 < num3)
		return (num2);
	else
		return (num3)
}

int	**find_solution(int **matrix, int *map_data)
{
	int	i;
	int	j;
	int	max;
	int	min;

	i = 1;
	max = 0;
	min = num_min(matrix[i][j - 1], matrix[i - 1][j], matrix[i - 1][j - 1]);
	while (i < map_data[0])
	{
		j = 1;
		while (j < map_data[1])
		{
			if (matrix[i][j] == 0)
				j++;
			if (min >= max)
				max = min + 1;
			matrix[i][j] += min + 1;
			j++;
		}
		i++;
	}
	return (matrix);
}
