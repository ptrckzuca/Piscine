/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:15:55 by pnovato-          #+#    #+#             */
/*   Updated: 2024/08/21 15:11:35 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 || power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}

/*
int main(void)
{
	printf("%d\n", ft_recursive_power(2,3));
}*/
