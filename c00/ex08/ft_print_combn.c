/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:01:59 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/17 10:46:11 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_incremento_i(int num[], int n)
{
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		if (num[i] < 9 + (i - (n - 1)))
			return (i);
		i--;
	}
	return (34);
}

void	ft_print(int vec[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(vec[i] + '0');
		i++;
	}
}

void	ft_incremento_num(int num[], int ind, int max)
{
	int	i;

	i = ind + 1;
	num[ind]++;
	while (i < max)
	{
		num [i] = num[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	num [10];
	int	i;

	i = 0;
	while (i < n)
	{
		num [i] = i;
		i++;
	}
	while (num[0] != 10 - n || num [n - 1] != 9)
	{
		ft_print (num, n);
		write(1, ", ", 2);
		ft_incremento_num(num, ft_incremento_i(num, n), n);
	}	
	i = 0;
	while (i < n)
	{
		num[i] = 10 - n +1;
		i++;
	}
	ft_print(num, n);
}
