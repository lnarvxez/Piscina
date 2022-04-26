/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:31:16 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/27 13:31:20 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		j *= -1;
	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		printf(" '%d' ", str[i]);
		k = (k * 10) +  (str[i] - '0');
		i++;
	}
	k *= j;
	return (k);
}

int main (void)
{
    char str[] = " +----+--+1234ab567";
    int res = ft_atoi(str);
    printf("%d", res);
}