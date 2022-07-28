/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:22:44 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/10 18:23:29 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putl(int x, char a, char b, char c)
{	
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar(a);
		}
		if (i < x && i != 0 && i != x - 1)
		{
			ft_putchar(b);
		}
		if (i == x - 1 && i != 0)
		{
			ft_putchar(c);
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
		{
			ft_putl(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
		if (i < y && i != 0 && i != y - 1)
		{
			ft_putl(x, 'B', ' ', 'B');
			ft_putchar('\n');
		}
		if (i == y - 1 && i != 0)
		{
			ft_putl(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
		i++;
	}
}
