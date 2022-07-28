/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:13:23 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/12 18:10:02 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c < 32 || c >= 127)
		return (0);
	else
	{
		return (1);
	}
}

void	print_nonpr(char c)
{
	unsigned char	*base_hex;
	unsigned char	s;

	s = (unsigned char)c;
	base_hex = (unsigned char *)"0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base_hex[s / 16]);
	ft_putchar(base_hex[s % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_char_is_printable(str[i])))
			print_nonpr(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
