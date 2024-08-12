#include <stdio.h>


char *ft_strupcase(char *str)
{
    int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32; 
		}
		i++;
	}
	return (str);
}

/* int main(void)
{
	char a[4] = "ola";

	printf("%s", ft_strupcase(a));
} */