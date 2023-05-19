#include <stdio.h>
#include <stdlib.h>
char *ft_itoa(int nbr)
{
    int len = 0;
    int n = nbr;
    char *c;
    
    if (nbr <= 0)
        len ++;
    while(nbr)
    {
        nbr = nbr /10;
        len++;
    }
    c = malloc(sizeof(char) * (len +1));
    c[len] = '\0';
    if (n < 0)
    {
        n = n* -1;
    }
    while(len)
    {
        len --;
        c[len] = (n % 10) +'0';
        n = n/10;
    }
    if(c[0] == '0')
        c[0] = '-';
    return(c);
    
}

int main(void)
{
    int i = -3;
    printf("%s",ft_itoa(i));
    return 0;
}


