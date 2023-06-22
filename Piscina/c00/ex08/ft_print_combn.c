/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antosanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:37:44 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/07 11:13:52 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_int_list(int *list, int size)
{
	int		i;
	char	digit;

	i = 0;
	while (i < size)
	{
		digit = '0' + list[i];
		write(1, &digit, 1);
		i++;
	}
}

void	print_comb(int n, int number, int *digits, int digits_size)
{
	int	i;

	if (n == 0)
	{
		print_int_list(digits, digits_size);
		if (digits[0] != 9 - digits_size + 1)
			write(1, ", ", 2);
	}
	else
	{
		i = number;
		while (i < 10)
		{
			digits[digits_size - n] = i;
			print_comb(n - 1, i + 1, digits, digits_size);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	word[9];

	print_comb(n, 0, word, n);
}
