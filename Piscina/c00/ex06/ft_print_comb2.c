/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antosanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:40:09 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/06 13:23:10 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_putchar(int n)
{
	write(1, &n, 1);
}

void	ft_print_nums(int number)
{
	int	a;
	int	b;

	if (number > 9)
	{	
		a = number / 10;
		b = number % 10;
		print_putchar(a + 48);
		print_putchar(b + 48);
	}
	else
	{
		print_putchar(48);
		print_putchar(number + 48);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_nums(num1);
			print_putchar(32);
			ft_print_nums(num2);
			if (num1 != 98 || num2 != 99)
			{
				print_putchar(44);
				print_putchar(32);
			}
			num2++;
		}
		num1++;
	}
}
