/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:38:22 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/26 15:52:28 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*final;

	i = 0;
	final = malloc(sizeof(int) * length);
	while (i < length)
	{
		final[i] = f(tab[i]);
		i++;
	}
	return (final);
}
