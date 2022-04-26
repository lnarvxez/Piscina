/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:00:41 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/16 18:33:04 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_n(int n)
{
	int	pri;
	int	seg;

	pri = '0' + (n / 10) % 10;
	seg = '0' + n % 10;
	write (1, &pri, 1);
	write (1, &seg, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_print_n(n1);
			ft_putchar(' ');
			ft_print_n(n2);
			if (n1 != 98 || n2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}
