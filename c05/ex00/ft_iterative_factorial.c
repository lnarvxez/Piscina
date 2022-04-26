/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:21:42 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/28 13:21:46 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (i <= nb)
		{
			f = f * i;
			i++;
		}
	}	
	return (f);
}
/*
int	main()
{
	int n;
	int f;

	n = 3;
	f = ft_iterative_factorial(n);
	printf("%d",f);
}*/