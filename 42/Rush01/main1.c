/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-nay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:03:31 by bben-nay          #+#    #+#             */
/*   Updated: 2022/07/17 11:15:28 by bben-nay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	check(char t1, char t2, char t3, char t4);
char	tch(int **tab, char v, int x);
char	tcb(int **tab, char v, int x);
char	tlg(int **tab, char v, int x);
char	tld(int **tab, char v, int x);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int*	ligne_tab(int x)
{
	int	mystique[24][4] = {{1, 2, 3, 4,}, {1, 2, 4, 3}, \
	{1, 3, 2, 4}, {1, 3, 4, 2}, {1, 4, 2, 3}, {1, 4, 3, 2}, \
	{2, 1, 3, 4}, {2, 1, 4, 3}, {2, 3, 1, 4}, {2, 3, 4, 1}, \
	{2, 4, 3, 1}, {2, 4, 1, 3}, {3, 1, 2, 4}, {3, 1, 4, 2}, \
	{3, 2, 1, 4}, {3, 2, 4, 1}, {3, 4, 1, 2}, {3, 4, 2, 1}, \
	{4, 1, 2, 3}, {4, 1, 3, 2}, {4, 2, 1, 3}, {4, 2, 3, 1}, \
	{4, 3, 1, 2}, {4, 3, 2, 1}};

	return (mystique[x]);
}

int*	tab_arg(char *str)
{
	int *tab;
	
	while (*str)
	{
		if (*str >= 49 && *str <= 62)
		{
			*tab = *str;
			++tab;
			++str;
		}
	}
	return (tab);
}

char	validation(char *arg, int **mystique)
{
	int 		*tab;
	int 		i;
	int 		y;
	char		*mtest;
	char		*ftest;

	i = 0;
	y = 0;
	tab = tab_arg(arg);

	while (tab[i] != '\0')
	{
		if (i >= 0 && i <= 3)
			mtest[i % 4] = tch(mystique , tab[i], i % 4);
		else if (i >= 4 && i <= 7)
			mtest[i % 4] = tcb(mystique , tab[i], i % 4);
		else if (i >= 8 && i <= 11)
			mtest[i % 4] = tlg(mystique , tab[i], i % 4);
		else if (i >= 12 && i <= 15)
			mtest[i % 4] = tld(mystique , tab[i], i % 4);
		if (i % 4 == 0)
		{
			ftest[y] = check(mtest[0], mtest[1], mtest[2], mtest[3]);
			y++;
		}
	}
	return (check(ftest[0], ftest[1], ftest[2], ftest[3]));
}

int	main(int argc, char **agrv)
{
	int	a;
	int	b;
	int	c;
	int	d;
	(void) argc;
	int	i = 0;
	int	y;
	int	*tab[4][4] = {{ligne_tab(0)},{ligne_tab(0)}, \
	{ligne_tab(0)},{ligne_tab(0)}};

	while (a < 24)
	{
		b = 0;
		while (b < 24)
		{
			c = 0;
			while (c < 24)
			{
				d = 0;
				while(d < 24)
				{
					if (validation(agrv[1], tab) == 'T')
						while (i < 4)
						{
							y = 0;
							while (y < 4)
							{
								ft_putchar(tab[i][y]);
								ft_putchar(' ');
								y++;
							}
							y--;
							ft_putchar('\n');
							i++;
						return (0);
					d++;
					tab[3] = ligne_tab(d);
				}
				c++;
				tab[2] = ligne_tab(c);
			}
			b++;
			tab[1] = ligne_tab(b);
		}
		a++;
		tab[0] = ligne_tab(a);
		}
	}
}
