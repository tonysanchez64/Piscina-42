/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antosanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:26:34 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/06 15:51:48 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	revi;
	int	x;

	i = 0;
	revi = size - 1;
	while (i < (size / 2))
	{
		x = tab[i];
		tab[i] = tab[revi];
		tab[revi] = x;
		i++;
		revi--;
	}
}
