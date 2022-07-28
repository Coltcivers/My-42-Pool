/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:05:13 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/25 13:05:20 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset) == 0
			&&is_sep(str[i + 1], charset) == 1)
			count++;
		i++;
	}
	return (count);
}

void	ft_writesplit(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (is_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_getsplit(char **result, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_sep(str[i + j], charset) == 0)
			{
				j++;
			}
			result[word] = malloc(sizeof(char) * (j + 1));
			ft_writesplit(result[word], &str[i], charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		word_count;

	word_count = ft_word_count(str, charset);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	result[word_count] = 0;
	ft_getsplit(result, str, charset);
	return (result);
}
