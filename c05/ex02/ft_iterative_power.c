/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:22:03 by pnovato-          #+#    #+#             */
/*   Updated: 2024/08/19 18:07:17 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power > 0)
	{
		while (power != 0)
		{
			x *= nb;
			power--;
		}
	}
	return (x);
}
/*
int main(void)
{
	printf("%d\n",ft_iterative_power(2,2));
}*/
