/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:48:15 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/28 14:40:53 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	minus_count(char *str)
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while ((str[i] >= 9 && str[i] <= 14) || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
		compteur++;
	return (compteur);
}

int	search_base(char c, int base)
{
	int		i;
	char	*str;
	char	*str2;

	i = 0;
	str = "0123456789abcdef";
	str2 = "0123456789ABCDEF";
	while (i < base)
	{
		if (c == str[i] || c == str2[i])
		{
			printf("%d\n", i);
			return (i);
		}
		i++;
	}
	return (0);
}
		
int	ft_atoi_base(char *str, int str_base)
{
	int	i;
	int	nbr;
	int	minus_count;

	i = 0;
	nbr = 0;
	minus_count = 0;
	while ((str[i] >= 9 && str[i] <= 14) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 'A' && str[i] <= 'Z') 
	|| (str[i] >= 'a' && str[i] <= 'z'))
	{
		nbr = nbr * str_base + search_base(str[i], str_base);
		i++;
	}
	if (minus_count == 1)
		nbr = -nbr;
	return (nbr);
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	printf("%d\n", ft_atoi_base(av[1], atoi(av[2])));
}
