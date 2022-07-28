/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:01:21 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/26 12:16:51 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_atoi(char *str);
void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	ft_putchar('0' + n);
}

int	operand_selection(char str)
{
	if (str == '+')
		return (0);
	else if (str == '-')
		return (1);
	else if (str == '/')
		return (2);
	else if (str == '*')
		return (3);
	else if (str == '%')
		return (4);
	return (-1);
}

int	operate(int sign, int nb1, int nb2)
{
	if (sign == 0)
		return (nb1 + nb2);
	else if (sign == 1)
		return (nb1 - nb2);
	else if (sign == 2)
		return (nb1 / nb2);
	else if (sign == 3)
		return (nb1 * nb2);
	else if (sign == 4)
		return (nb1 % nb2);
	return (0);
}

int	main(int ac, char **av)
{
	int	sign;

	sign = operand_selection(av[2][0]);
	if (ac != 4)
		return (1);
	if (sign == -1)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (2);
	}
	if (av[3][0] == 48 && sign == 2)
	{
		ft_putstr("Stop : division by zero\n");
		return (3);
	}	
	if (av[3][0] == 48 && sign == 4)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (4);
	}
	ft_putnbr(operate(sign, ft_atoi(av[1]), ft_atoi(av[3])));
	ft_putchar('\n');
	return (0);
}	
