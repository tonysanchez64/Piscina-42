/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antosanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 08:22:48 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/21 08:49:48 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

char	*save_memory(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;
	int		num;

	i = 0;
	num = 0;
	if (size <= 0)
		num = 1;
	while (i < size)
	{
		num = num + ft_strlen(strs[i]);
		i++;
	}
	num = num + ft_strlen(sep) * size - 1;
	tab = (char *)malloc(num * sizeof(char));
	if (tab == 0)
		return (0);
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*tab;
	int		x;

	tab = save_memory(size, strs, sep);
	i = -1;
	x = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			tab[x++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			tab[x++] = sep[j];
			j++;
		}
	}
	tab[x] = '\0';
	return (tab);
}
