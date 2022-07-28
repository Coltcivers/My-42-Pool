/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:10:31 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/14 11:27:50 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	if (nb == 0)
		return (dest);
	while (dest[size])
		size++;
	while (src[i] != '\0' && nb > i)
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[i + size] = '\0';
	return (dest);
}
