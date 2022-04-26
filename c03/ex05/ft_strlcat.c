/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:15:33 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/26 16:15:36 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	while (dest[i] != '\0')
		i++;
	res = 0;
	while (src[res] != '\0')
	{
		res++;
	}
	if (size <= i)
		res += size;
	else
		res += i;
	j = 0;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main () {
	char src[10] = "nardo";
	char dest[10] = "Leo";
	strlcat(dest, src, 2);
	//ft_strlcat(dest, src, 2);
	//printf("Res: %s", dest);
	printf("Mia: %s", dest);	
	return(0);
}*/