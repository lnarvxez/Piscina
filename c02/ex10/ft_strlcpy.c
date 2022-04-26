/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:01:49 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/23 20:39:56 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	if (size == 0)
	{
		return (l);
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}

int	main (void)
{
	char src[10] = "Leos";
	char dest[12] = "qwesdesdrfe";
	unsigned int size;

	size = 3;
	unsigned int test = ft_strlcpy(dest, src, size);
	//printf("src: %s\ndest: %s", src,dest);
	printf("%d", test);
	return (0);
}