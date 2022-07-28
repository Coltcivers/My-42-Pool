/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:46:09 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/10 10:42:27 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char i, char j, char k)
{
	char	c;
	char	e;

	c = ',';
	e = ' ';
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i == 55 && j == 56 && k == 57)
		return ;
	write(1, &c, 1);
	write(1, &e, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = 48;
	j = 48;
	k = 48;
	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{	
				ft_write(i, j, k);
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}
