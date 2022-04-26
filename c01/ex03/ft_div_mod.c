/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:10:00 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/02/21 14:26:31 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main ()
{
	int a;
	int b;
	int div;
	int mod;

	a = 17;
	b = 10;
	div = 0;
	mod = 0;
	ft_div_mod(a,b,&div,&mod);
	printf("%d %d", div , mod); 
}
