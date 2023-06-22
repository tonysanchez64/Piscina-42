/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antosanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:58:48 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/21 17:03:13 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_base(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[i] == '\0' || str[i + 1] == '\0')
		return (0);
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if (str[i] == '+' || str[i] == '-' || str[i] < 32)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		nbase;
	long	nb;

	nb = (long)nbr;
	nbase = get_base(base);
	if (check_base(base) == 1)
	{		
		if (nb < 0)
		{
			nb = nb * (-1);
			ft_putchar('-');
		}
		if (nb >= nbase)
		{
			ft_putnbr_base(nb / nbase, base);
			ft_putnbr_base(nb % nbase, base);
		}
		else
		{
			ft_putchar(base[nb]);
		}
	}
}
