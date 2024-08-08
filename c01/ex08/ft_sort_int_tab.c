/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:48:34 by pnovato-          #+#    #+#             */
/*   Updated: 2024/08/06 18:56:08 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	aux;

	i = 0;
	while (i < size)
	{
		c = i + 1;
		while (c < size)
		{
			if (tab[i] > tab[c])
			{
				aux = tab[i];
				tab[i] = tab[c];
				tab[c] = aux;
			}
			c++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	array[10] = {2, 5, 0, 30, 45, 54, 7, 80, 14, 10};
	
	ft_sort_int_tab(array,10);
	for(int i = 0;i < 10; i++)
	{
		printf("%d ",array[i]);
	}
}*/
