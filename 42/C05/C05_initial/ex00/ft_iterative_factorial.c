/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:25:37 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/19 14:13:37 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	somme;

	if (nb < 0)
		return (0);
	somme = 1;
	while (nb > 0)
	{
		somme *= nb;
		nb--;
	}
	return (somme);
}
