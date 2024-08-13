#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int dlen;
	unsigned int i;

	dlen = strlen(dest);
	i = 0;
	while(i < nb && src[i] != '\0')
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}

int main(void)
{
	char a[] = "he";
	char b[] = "llo";

	printf("%s",ft_strncat(a,b,2));
}