#include <stdio.h>

char *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char tmp;

    while (str[i])
        i++;
    while (j  <=  i / 2)
    {
        tmp = str[i  - 1];
        str[i - j - 1] = str [j];
        str [j]=tmp;
        j++;
    }
    return (str);
}

int main(void)
{
    printf("%s",ft_strrev("12345"));
}