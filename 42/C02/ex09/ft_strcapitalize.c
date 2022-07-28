/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:09:03 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/11 21:46:56 by hgirard          ###   ########.fr       */
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

int	not_numeric(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (0);
	}
	else
		return (1);
}

int	not_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}	
		if (i != 0)
		{	
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (not_numeric(str[i - 1]) && not_alpha(str[i - 1]))
					str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
