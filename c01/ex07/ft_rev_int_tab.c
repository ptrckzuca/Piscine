/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:39:39 by pnovato-          #+#    #+#             */
/*   Updated: 2024/08/06 18:54:56 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size - 1)
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = aux;
		size--;
		i++;
	}
}
/*
int	main(void)
{
	int	array[10];

	array = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(array,10);
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",array[i]);
	}
}*/
