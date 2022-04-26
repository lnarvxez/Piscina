/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:00:26 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/23 21:45:42 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char dest1[] = "abcdefghi";
	char src1[] = "1234";

	char dest2[] = "abcdefghi";

	char *test1 = ft_strncpy(dest1, src1, 7);
	char *test2 = strncpy(dest2, src1, 7);

	for (int i = 0; i < 10; i++)
	{
		if (test1[i] == '\0')
			printf("\\0");
		else
			printf("%c", test1[i]);
	}
	printf("\n");
	
	for (int i = 0; i < 10; i++)
	{
		if (test2[i] == '\0')
			printf("\\0");
		else
			printf("%c", test2[i]);
	}
	printf("\n");
}
