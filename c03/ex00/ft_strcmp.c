/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:55:43 by pnovato-          #+#    #+#             */
/*   Updated: 2024/08/12 19:14:55 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	dif;
	int	a;
	int	b;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		a = s1[i] - '0';
		b = s2[i] - '0';
		dif = a - b;
		return (dif);
	}
	return (0);
}
/*
int	main(void)
{
	char a[4] = "ABA";
	char b[4] = "ABZ";

	printf("%d",ft_strcmp(a,b));
}
*/
