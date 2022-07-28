/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:27:14 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/16 18:24:42 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[1] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_sort_params(char **str, int size)
{	
	int	i;
	int	j;
	char	*stock;
	
	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size - i - 1)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				ft_strcpy(str[j], stock);
				ft_strcpy(str[j + i], str[j]);
				ft_strcpy(stock, str[j + i]);
			}
			j++;
		}
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;
	char	**stock;
 
	i = 1;
	stock = ft_sort_params(argv, argc - 1);
	while (i < argc - 1)
	{
		ft_putstr(stock[i]);
		i++;
	}
}
