/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:04:19 by pnovato-          #+#    #+#             */
/*   Updated: 2024/08/05 18:06:39 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	result_div;
	int	result_mod;

	result_div = a / b;
	result_mod = a % b;
	*div = result_div;
	*mod = result_mod;
}
/*
int main(void)
{
	int	div;
	int	mod;

	ft_div_mod(10,2,&div,&mod);
	printf("div = %d, mod = %d",div,mod);
}*/
