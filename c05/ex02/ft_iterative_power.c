/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:22:24 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/28 17:22:26 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	p;

	p = nb;
	if (power < 0)
		return (0);
	else
	{
		if (power == 0)
			return (1);
		if (power == 1)
			return (nb);
		while (power > 1)
		{
			p = p * nb;
			power--;
		}
	}
	return (p);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(3,2));
}*/