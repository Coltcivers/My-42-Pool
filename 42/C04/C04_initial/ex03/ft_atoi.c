/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:21:41 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/16 12:43:45 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compteur_minus(char *str)
{
	unsigned int	i;
	unsigned int	min;

	min = 0;
	i = 0;
	while (!(str[i] >= 48 && str[i] <= 57))
	{
		if (str[i] == '-')
			min += 1;
	i++;
	}
	return (min);
}

int	condition(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] >= 48 && str[i + 1] <= 57)
			{
				return (1);
			}
			if (!(str[i + 1] == '-' || str[i + 1] == '+'))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	ft_bis(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57 && condition(str))
		{
			while (str[i] >= 48 && str[i] <= 57)
			{
				nb *= 10;
				nb = nb + (str[i] - 48);
				i++;
			}
			return (nb);
		}
		i++;
	}
	return (0);
}

int	ft_second(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			while (str[i] >= 48 && str[i] <= 57)
			{
				nb *= 10;
				nb = nb + (str[i] - 48);
				i++;
			}	
			return (nb);
		}
		i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	min;
	int	nb;

	if (str[0] >= 48 && str[0] <= 57)
	{
		nb = ft_second(str);
	}
	else
	{
		nb = ft_bis(str);
	}
	min = compteur_minus(str);
	if (min % 2 != 0)
		nb = -nb;
	return (nb);
}
