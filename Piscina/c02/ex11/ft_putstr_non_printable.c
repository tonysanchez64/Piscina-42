/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antosanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:30:19 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/12 14:16:12 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hex;
	unsigned char	str_value;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		str_value = (unsigned char)str[i];
		if (str_value < 32 || str_value > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex[str_value / 16]);
			ft_putchar(hex[str_value % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
