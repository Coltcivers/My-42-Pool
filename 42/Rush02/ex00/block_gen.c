/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block_gen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:44:59 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/24 23:34:42 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_atoi(char *str);
int		ft_strlen(char *str);

int	block_return(char *str, int block)
{
	int		i;
	int		j;
	int		final;
	int		compteur;
	char	*stock;

	i = ft_strlen(str) - ((block * 3) + 1);
	j = 2;
	compteur = 0;
	stock = malloc(4 * sizeof(char));
	if (ft_strlen(str) == 4 && str[0] <= 57 && block == 1)
	{
		free(stock);
		return (ft_atoi(str) / 1000);
	}
	if (block * 3 == ft_strlen(str) - 2)
	{
		stock[0] = '0';
		compteur = 1;
	}
	while (compteur < 3)
	{
		stock[j--] = str[i--];
		compteur++;
	}
	final = ft_atoi(stock);
	free(stock);
	return (final);
}		
