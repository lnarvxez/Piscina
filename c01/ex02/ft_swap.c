/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:14:47 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/21 13:50:41 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux_a;
	int	aux_b;

	aux_a = *a;
	aux_b = *b;
	*a = aux_b;
	*b = aux_a;
}
/*
int main (void)
{
	int a;
	int b;

	a = 7;
	b = 9;

	ft_swap(&a, &b);

	printf("%d %d",a,b);

}*/
