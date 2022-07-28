/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:19:08 by thrio             #+#    #+#             */
/*   Updated: 2022/07/24 23:39:01 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);
int	ft_strlen(char *str);

char	**buffer_assignement(char *filename, int osize)
{
	int	file;
	char	*buffer;
	char	**final;

	file = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * osize);
	read(file, buffer, osize);
	buffer[osize - 1] = '\0';
	close(file);
	final = ft_split(buffer, ":\n");
	free(buffer);
	return (final);
}
