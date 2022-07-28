/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:53:48 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/26 15:54:10 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			compteur++;
		i++;
	}
	return (compteur);
}	
