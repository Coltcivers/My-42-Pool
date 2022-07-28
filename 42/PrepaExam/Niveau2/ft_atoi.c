/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:16:42 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/27 15:28:44 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	minus_count;

	i = 0;
	nbr = 0;
	minus_count = 0;
	while ((str[i] >= 9 && str[i] <= 14) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		minus_count++;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr *= 10;
		nbr += (str[i] - 48);
		i++;
	}
	if (minus_count == 1)
		nbr = -nbr;
	return (nbr);
}	
