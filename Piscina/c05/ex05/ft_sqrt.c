/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antosanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:02:17 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/15 09:50:12 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	double	num;
	int		castnum;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	num = nb / 2;
	while (num * num - nb > 0.5)
	{
		num = 0.5 * (num + nb / num);
	}
	castnum = (int)num;
	if (castnum * castnum == nb)
		return (castnum);
	return (0);
}
