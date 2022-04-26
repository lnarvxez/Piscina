/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:16:14 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/23 20:28:13 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
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
		if (str[i] < 'A' || str[i] > 'Z')
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
	char	str[] = "QWE";
	int res;
	res = ft_str_is_uppercase(str);
	printf("%d ", res);
	return (0);
}*/
