/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:17:07 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/23 20:38:36 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i])
	{
		if (c == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (c == 0 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (str[i] < 48 || (str[i] > '9' && str[i] < 'A'))
			c = 1;
		else if ((str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			c = 1;
		else
			c = 0;
		i++;
	}
	return (str);
}

int main (void)
{
	char	str[] = "salut ,comJSDOJDOGREante-deux; 40cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
