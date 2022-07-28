/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:44:28 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/27 19:42:50 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_sep(char c)
{
	if ((c == ' ') || (c >= 9 && c <= 11))
		return (1);
	return (0);
}

int	word_count(char *str)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (str == NULL || str == "")
		return (0);
	while (str[i + 1] != '\0')
	{
		if (!is_sep(str[i]) && is_sep(str[i + 1]))	
			words++;
		i++;
	}
	if (str[i] !=  ' ') 	
		words++;
	return (words);
}

void	write_split(char *dest, char *src)
{
	int	i;

	i = 0;
	while (!is_sep(src[i]))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	assign(char *str, char **final)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i]))
			i++;
		else
		{
			j = 0;
			while (!is_sep(str[i + j]))
				j++;
			final[k] = malloc(sizeof(char) * (j + 1));
			write_split(final[k], &str[i]);
			i += j;
			k++;
		}
	}
}

char	**ft_split(char *str)
{
	char	**final;
	int	wordcount;

	wordcount = word_count(str);
	final = malloc(sizeof(char *) * wordcount + 1);
	assign(str, final);
	final[wordcount] = 0;
	return (final);
}

int	main(void)
{
	char	*str;
	char	**final;

	str = " salut toi c moi ";
	final = ft_split(str);
	printf("%s\n", final[0]);
	printf("%s\n", final[1]);
	printf("%s\n", final[2]);
	printf("%s\n", final[3]);
	return (0);
}
