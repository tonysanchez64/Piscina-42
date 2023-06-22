/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antosanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:09:10 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/14 17:58:10 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
int	ft_check(char *str, char *base)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	j = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			while (str[i + j] >= 48 && str[i + j] <= 57)
			{
				num = (num * 10) + str[i + j] - 48;
				j++;
			}
			return (num);
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	sign;
	int	i;

	sign = 1;
	num = ft_check(str);
	i = 0;
	while (str[i])
	{
		while (str[i] <= 32)
			i++;
		if (str[i] == '-')
			sign = sign * (-1);
		else if (str[i] == '+')
			sign = sign * 1;
		if (str[i] >= 48 && str[i] <= 57)
			return (num * sign);
		i++;
	}
	return (0);
}
