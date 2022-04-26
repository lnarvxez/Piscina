/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:37:23 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/21 14:15:15 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *b;
	*b = *a;
	*a = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

int main(void)
{
	int tab[5];
	int i;

	i = 0;
	tab [0] = 7;
	tab [1] = 0;
	tab [2] = 5;
	tab [3] = 2;
	tab [4] = 3;
	ft_sort_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d ",tab[i]);
		i++;
	}
}
