#include <stdio.h>
int power_2(unsigned int n)
{
    if (n == 0)
        return (0);
    while(n % 2 == 0)
    {
        n = n / 2;
    }
    if (n == 1)
        return (1);
    else    
        return (0);
}

int main(void){
    printf("%d",power_2(35));
    printf("%d",power_2(2));
    printf("%d",power_2(4));
    printf("%d",power_2(0));
}