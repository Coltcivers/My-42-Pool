/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:55:54 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/27 13:44:29 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	dec;
	int	inc;

	i = 0;
	inc = 0;
	dec = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			dec++;
		if (f(tab[i], tab[i + 1]) >= 0)
			inc++;
		i++;
	}
	if (inc == i || dec == i)
		return (1);
	return (0);
}
