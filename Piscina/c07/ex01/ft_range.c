/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antosanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:17:02 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/20 11:33:53 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	i;
	int	size;

	size = max - min;
	num = (int *)malloc(sizeof(int) * size);
	i = 0;
	if (num == 0)
		return (0);
	if (min >= max)
		return (0);
	while (i < size)
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}
