/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:26:10 by pnovato-          #+#    #+#             */
/*   Updated: 2024/08/05 18:54:48 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	result_mod;	

	result = *a / *b;
	result_mod = *a % *b;
	*a = result;
	*b = result_mod;
}

/* int main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 2;

	ft_ultimate_div_mod(&a,&b);
	printf("a = %d, b = %d",a,b);
}*/
