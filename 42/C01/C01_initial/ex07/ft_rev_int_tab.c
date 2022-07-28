/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:55:41 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/10 11:55:45 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	stock;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		stock = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = stock;
		i++;
	}
}
