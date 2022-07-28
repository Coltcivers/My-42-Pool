/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:04:56 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/20 13:10:30 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	nbr(char **str, int size, char *sep)
{
	int	i;
	int	j;
	int	compteur;
	int	k;

	i = 0;
	k = 0;
	compteur = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			compteur++;
			j++;
			k++;
		}
		i++;
		k++;
		if (i < size)
			compteur += ft_strlen(sep);
	}
	compteur++;
	return (compteur);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*final;

	final = malloc(nbr(strs, size, sep));
	if (size == 0)
		return (final);
	i = -1;
	k = -1;
	while (++i < size && size != 0)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			final[++k] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			final[++k] = sep[j++];
	}
	if (size != 0)
		final[k + 1] = '\0';
	return (final);
}
