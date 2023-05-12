#include <stdio.h>
int max (int *tab, unsigned int len)
{
    int n = 0;
    unsigned int i= 0;
    
    n = tab[i];
    while(i < len)
    {
        if (tab[i] > n)
        {
            n = tab[i];
        }
        i++;
        
        
    }
    return (n);
}

int main (void)
{
    int num_arry[] = {1, 2,3,410, 2};
    printf("%d",max(num_arry,5));
}