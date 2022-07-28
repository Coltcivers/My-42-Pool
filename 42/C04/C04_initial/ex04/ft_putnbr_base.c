/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:55:32 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/16 12:47:42 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	minus(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (1);
		else
			i++;
	}
	return (0);
}

int	condition(char *str)
{
	unsigned int	i;
	unsigned int	j;

	j = 1;
	i = 0;
	if (ft_strlen(str) == 1 || str[0] == '\0' || minus(str) == 1)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
			return (1);
		while (j < ft_strlen(str))
		{
			if (str[i] != str[j])
				j++;
			else if (str[i] == str[j])
				return (1);
		}
		i++;
		j = i + 1;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;

	if (condition(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	else
		n = nbr;
	if (n > 0)
	{
		ft_putnbr_base((n / ft_strlen(base)), base);
		n %= ft_strlen(base);
		ft_putchar(base[n]);
	}
}
