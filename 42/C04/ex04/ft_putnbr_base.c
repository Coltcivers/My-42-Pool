/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:55:32 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/19 16:58:18 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	condition(char *str)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (ft_strlen(str) == 1 || str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] >= 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] != str[j])
				j++;
			else if (str[i] == str[j])
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	n;

	if (condition(base) != 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	else
		n = nbr;
	if (n > 0)
	{
		ft_putnbr_base((n / ft_strlen(base)), base);
		n %= ft_strlen(base);
		write(1, &base[n], 1);
	}
}
