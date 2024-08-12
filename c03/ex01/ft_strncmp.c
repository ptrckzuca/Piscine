#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	//return (0);
	return (s1[i] - s2[i]);
}

int main(void)
{
	char a[] = "ABC";
	char b[] = "AB";

	printf("%d", ft_strncmp(a,b,2));
}
