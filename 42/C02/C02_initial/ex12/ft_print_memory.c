/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:42:56 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/11 20:28:22 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	while (size > 0)
	{
		write(1, &addr, 1);
	}
}



void	main(void)
{
	char str[] = "salut c'est moi";
	fr_print_memory(&str, ft_strlen(str));
}

	
