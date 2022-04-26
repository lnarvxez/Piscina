/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:18:00 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/28 20:18:02 by lnarvaez         ###   ########.fr       */
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
		while (i <= (nb / i))
		{
			if (nb % i == 0)
				return (0);
			i++;
		}	
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	
	if (nb <= 1)
		return (2);
	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}

int main ()
{
	printf("%d",ft_find_next_prime(542));
}