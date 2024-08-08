#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main (void)
{
	char string[3] = "abc";
	char other[3] = "1Ac";

	printf("%d", ft_str_is_lowercase(string));
	printf("%d", ft_str_is_lowercase(other));
}
