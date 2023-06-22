/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antosanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:10:20 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/20 12:06:57 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	array = (int *)malloc(size * sizeof(int));
	if (array == 0)
		return (-1);
	i = 0;
	while (min - max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (size);
}
