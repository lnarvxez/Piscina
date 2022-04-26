/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:59:44 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/23 20:27:46 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
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
		if (str[i] < '0' || str[i] > '9')
			c = 0;
		i++;
	}
	return (c);
}
/*
int main (void)
{
	char str [] = "1dsf213";
	int res;
	res = ft_str_is_numeric(str);
	printf("%d \n",res);
	return (0);
}*/
