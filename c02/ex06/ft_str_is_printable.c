/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:21:57 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/23 20:27:38 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	if (str[i] == '\0')
	{
		return (c);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			c = 0;
		}
		i++;
	}
	return (c);
}
/*
int main (void)
{
	char	str[] = "aâ";
	int res;
	res = ft_str_is_printable(str);
	printf("%d ", res);
	return (0);
}*/
