/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:57:04 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/19 14:59:27 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		sum = nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	return (sum);
}
