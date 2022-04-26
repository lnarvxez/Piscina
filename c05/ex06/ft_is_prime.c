/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:03:27 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/28 20:03:29 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (i <= (nb / 2))
		{
			if (nb % i == 0)
				return (0);
			i++;
		}	
	}
	return (1);
}
/*
int main ()
{
	printf("%d",ft_is_prime(2));
}*/