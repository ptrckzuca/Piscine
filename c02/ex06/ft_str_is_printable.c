#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}	
	return (1);
}

/*  int main(void)
{
	char a[4] = "ola";
	char b[1] = "";

	printf("%d", ft_str_is_printable(a));
	printf("%d", ft_str_is_printable(b));
}  */