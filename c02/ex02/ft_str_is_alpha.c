/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:14:41 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/23 20:44:54 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
		if ((str[i] < 'A' || str[i] > 'z') && (str[i] > 'Z' || str[i] < 'a'))
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
	char str[] = "_";
	int res;
	res = ft_str_is_alpha(str);
	printf("%d\n",res);
	return (0);
}*/
