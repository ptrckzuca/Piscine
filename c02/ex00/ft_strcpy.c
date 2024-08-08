/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:28:57 by pnovato-          #+#    #+#             */
/*   Updated: 2024/08/07 19:30:22 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char dest;

	printf("%s",ft_strcpy(&dest,"ola"));
}*/
