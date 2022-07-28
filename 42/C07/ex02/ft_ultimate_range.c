/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:11:08 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/18 19:06:57 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int *));
	i = min;
	j = 0;
	while (i < max)
	{
		range[0][j] = i;
		i++;
		j++;
	}
	return (max - min);
}
