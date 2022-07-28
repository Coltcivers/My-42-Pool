/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:41:53 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/21 19:17:44 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * ft_strlen(str) + 1);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*my_stock;

	i = 0;
	my_stock = malloc(sizeof(t_stock_str) * (ac + 1));
	while (i < ac)
	{
		my_stock[i].str = av[i];
		my_stock[i].size = ft_strlen(av[i]);
		my_stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	my_stock[i].str = 0;
	return (my_stock);
}
