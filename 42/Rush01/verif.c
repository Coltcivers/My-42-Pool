/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-nay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 05:09:16 by bben-nay          #+#    #+#             */
/*   Updated: 2022/07/17 06:49:10 by bben-nay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	tch(int **tab, char v, int x)
{
	int			i;
	char		count;

	i = 0;
	count = 49;
	while (i < 4)
	{
		if (tab[i][x] < tab[i + 1][x])
			count++;
		else
		{
			if (count == v)
				return ('T');
			else
				return ('F');
		}
		i++;
	}
	if (count == v)
		return ('T');
	else
		return ('F');
}

char	tcb(int **tab, char v, int x)
{
	int			i;
	char		count;

	i = 3;
	count = 49;
	while (i > 0)
	{
		if (tab[i][x] < tab[i - 1][x])
			count++;
		else
		{
			if (count == v)
				return ('T');
			else
				return ('F');
		}
		i--;
	}
	if (count == v)
		return ('T');
	else
		return ('F');
}

char	tlg(int **tab, char v, int x)
{
	int			i;
	char		count;

	i = 0;
	count = 49;
	while (i < 4)
	{
		if (tab[x][i] < tab[x][i + 1])
			count++;
		else
		{
			if (count == v)
				return ('T');
			else
				return ('F');
		}
		i++;
	}
	if (count == v)
		return ('T');
	else
		return ('F');
}

char	tld(int **tab, char v, int x)
{
	int			i;
	char		count;

	i = 3;
	count = 49;
	while (i > 0)
	{
		if (tab[x][i] < tab[x][i - 1])
			count++;
		else
		{
			if (count == v)
				return ('T');
			else
				return ('F');
		}
		i--;
	}
	if (count == v)
		return ('T');
	else
		return ('F');
}

char	check(char t1, char t2, char t3, char t4)
{
	if (t1 == t2 || t2 == t3 || t3 == t4 || t1 == 'T')
		return ('T');
	else
		return ('F');
}
