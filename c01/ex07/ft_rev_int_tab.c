/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:32:52 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/21 14:07:03 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	aux_a;

	a = 0;
	b = size - 1;
	while (a < (size / 2))
	{
		aux_a = tab[a];
		tab[a] = tab[b];
		tab[b] = aux_a;
		a++;
		b--;
	}
}

int main ()
{
	int tab[5];
	int i;

	i = 0;
	tab[0] = 2;
	tab[1] = 3;
	tab[2] = 6;
	tab[3] = 1;
	tab[4] = 0;
	

	ft_rev_int_tab(tab, 5);

	while (i < 5)
	{
		printf("%d ",tab[i]);
		i++;
	}
}
