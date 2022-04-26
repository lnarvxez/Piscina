/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:54:50 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/23 20:25:42 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
		if (str[i] < 97 || str[i] > 122)
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
	char	str[] = "";
	int res;
	res = ft_str_is_lowercase(str);
	printf("%d ", res);
	return (0);
}*/
