#include <stdio.h>

char to_lowercase(char *str)
{
	int i;

	i = 0;
	while(str[i] = != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		to_lowercase(str);
		if(!(str[i] >= 97 && str[i] <= 122 
			|| str[i] >= 65 && str[i] <= 90))
		{
			i++;
		}
		else if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			while(str[i])
		}
	}
}