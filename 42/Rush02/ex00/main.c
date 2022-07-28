/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:41:26 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/24 23:36:41 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	**ft_split(char *str, char *charset);
int		ft_strlen(char *str);
char	**buffer_assignement(char *filename, int osize);
int		block_return(char *str, int block);
int		ft_atoi(char *str);

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

int	unity_parse(int n, int relative_pos)
{
	char	**final;

	if (n == 0)
		return (0);
	final = buffer_assignement("numbers.dict", 691);
	if (relative_pos == 2)
	{
		ft_putstr(final[n * 2 + 1]);
		ft_putstr(final[57]);
	}
	else if (relative_pos == 1)
		ft_putstr(final[(2 * (((n * 10) - 20) / 10)) + 41]);
	else if (relative_pos == 0)
		ft_putstr(final[n * 2 + 1]);
	return (0);
}

int	composed_parse(char *str)
{
	int		manip_block;
	int		current_block;
	int		digit_height;
	char	**final;

	current_block = (ft_strlen(str) / 3);
	final = buffer_assignement("numbers.dict", 691);
	if (ft_atoi(str) < 10)
	{
		ft_putstr(final[(ft_atoi(str) * 2) + 1]);
		return (0);
	}
	if (strlen(str) == 3)
		current_block = 0;
	digit_height = 59 + ((current_block -1) * 2);
	while (current_block >= 0)
	{
		manip_block = block_return(str, current_block);
		unity_parse(manip_block / 100, 2);
		unity_parse((manip_block % 100) / 10, 1);
		unity_parse(manip_block % 10, 0);
		if (current_block != 0)
			ft_putstr(final[digit_height]);
		current_block--;
		digit_height -= 2;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		composed_parse(av[1]);
	}
}
