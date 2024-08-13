#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int n;

    i = 0;
    n = 0;
    while(str[i] != '\0')
    {
        if(str[i] == to_find[n])
        {
            n++;
            if(to_find[n - 1] == str[i])
            {
                return (to_find);
            }
        }
        else
        {
            n = 0;
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    char a[] = "abcd";
    char b[] = "hello";

    printf("%s",ft_strstr(a,b));
}