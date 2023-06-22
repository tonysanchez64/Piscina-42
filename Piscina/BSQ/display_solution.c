/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_solution.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emercade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:49:20 by emercade          #+#    #+#             */
/*   Updated: 2023/06/21 14:08:08 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**check_max(int **matrix, int *max, char *map_char)
{
	int	row;
	int	col;
	int	**pos_x;
	char	**matrixf;
	
	row = 0;
	while (matrix[row])
	{
		col = 0;
		while (matrix[row][col])
		{
			if (matrix[row][col] == 0)
				matrixf[row][col] = map_char[1];
			else if (matrix[col][row] < max)
				matrixf[row][col] == map_char[0];
			else
			{
				matrixf[row][col] = map_char[2];
				**pos_x = pos_x[row][col];
			col++;
		}
		row++;
	}
	return (matrixf);
}

char	**display_solution(char **matrix, int **pos_x, int max, char *map_char)
{
	int	i;
	int	j;
	char	**solution

	i = pos_x[0];
	while (i > max)
	{
		j = pos_x[1]
		while (j > max)
		{
			matrix[i][j] = map_char[2];
			j--;
		}
		i--;
	}
	**solution = **matrix;
	return(solution);
}

void	ft_print_solution(char **solution, int *map_data)
{
	int	x;
	int	y;

	x = 0;
	while (x < map_data[0])
	{
		y = 0;
		while (y < map_data[1])
		{
			write(1, &matrix[x][y], 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}
