/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:05:40 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/23 21:47:07 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(char hexa)
{
	int	hex;
	int	aux_h;

	hex = 0;
	if (!hexa)
		return ;
	else
	{
		aux_h = hexa / 16;
		hex = hexa % 16;
		ft_hexa(hex / 16);
	}
	if (hex > 9)
	{
		ft_putchar (aux_h + '0');
		ft_putchar ((hex - 10) + 'a');
	}
	else
		ft_putchar (hex + '0');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = i - 1;
	while (str[++j] != '\0')
	{
		i = str[j];
		if ((i >= 0 && i <= 31) || (i == 127))
		{
			ft_putchar('\\');
			if (i <= 16)
			{
				if (i <= 9)
				{
					ft_putchar('0');
					ft_hexa(i);
				}
				else
					ft_hexa(i);
			}
		}
		else
			ft_putchar(str[j]);
	}
}

int main()
{
    char str[10];
    str[0] = -12;
	str[1] = 'a';
    ft_putstr_non_printable(str);
    //printf("\nhexadecimal: %s:", str);
}
