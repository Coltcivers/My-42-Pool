/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:28:30 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/20 17:16:02 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	temp;
	int	sqrt;

	sqrt = nb / 2;
	temp = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (nb / temp + temp) / 2;
	}
	if (sqrt * sqrt != nb)
		return (0);
	return (sqrt);
}
