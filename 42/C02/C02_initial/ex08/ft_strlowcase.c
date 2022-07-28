/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:08:10 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/11 21:13:00 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*a;

	a = str;
	while (*a)
	{
		if (*a >= 'A' && *a <= 'Z')
		{
			*a += 32;
		}
		a++;
	}
	return (str);
}