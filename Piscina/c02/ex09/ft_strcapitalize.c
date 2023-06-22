/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antosanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:45:51 by antosanc          #+#    #+#             */
/*   Updated: 2023/06/13 13:17:24 by antosanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int	i;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_lowercase(str);
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i - 1] > 31 && str[i - 1] < 48)
			|| (str[i - 1] > 57 && str[i - 1] < 65))
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		}
		else if (str[i - 1] > 90 && str[i - 1] < 97)
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		}
		else if (str[i -1] > 122 && str[i - 1] < 127)
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
