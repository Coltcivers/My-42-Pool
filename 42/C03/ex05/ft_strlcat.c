/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:50:57 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/13 15:55:22 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_i;

	i = 0;
	size_i = 0;
	while (dest[size_i] && size_i < size)
		size_i++;
	while (src[i] && size && size_i + i < size - 1)
	{
		dest[size_i + i] = src[i];
		i++;
	}
	if (size_i + i < size)
		dest[size_i + i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return ((size_i + i));
}	
