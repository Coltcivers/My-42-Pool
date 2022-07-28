/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:13:23 by hgirard           #+#    #+#             */
/*   Updated: 2022/07/11 21:54:26 by hgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_nonpr(int n)
{
	int		i;
	char	tab[3];
	
	i = 0;
	if (n >= 16)
		tab[0] = '1'; 
	else  
		tab[0] = '\\'; 
	if (n >= 10 && n <= 15)
		tab[1] = (n % 10) + 65;
	else if (n >= 25 && n <= 31)
		tab[1] = (n % 10) + 65;
	tab[2] = '\0';
	while(tab[i] != '\0')
	{
		write(1, &tab[i], 1);
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int 	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while(str[i] != 0)
	{
		if (str[i] < 32)
		{
			while (j != str[i])
			{
				j++;
			}
			print_nonpr(j);
		}
		else if (str[i] == 127)
		{
			write(1, "\\7F", 1);
		}
		if (str[i] > 31 && str[i] != 127)
			write(1, &str[i], 1);
		i++;
	}
}
