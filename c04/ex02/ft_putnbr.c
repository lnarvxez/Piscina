/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 22:54:38 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/26 22:54:40 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 || nb <= 2147483647)
	{	
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			nb = 147483648;
		}
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * (-1);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			nb = nb % 10;
		}
		if (nb < 10)
		{
			ft_putchar(nb + 48);
		}
	}
}
/*
int main(void)
{
	int nb;

	nb = 15;
	ft_putnbr(nb);
}*/