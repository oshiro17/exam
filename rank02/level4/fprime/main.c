#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc , char **argv)
{
    int i = 2;
    int num;

    if (argc == 2)
    {
        num = atoi(argv[1]);
        if (num == 1)
            printf("1");
        while ( num >= i)
        {
            if (num % i == 0)
            {
                printf("%d", i);
            if (num == i)
                break;
            printf("*");
            num = num /i;
            i = 2;
            }
            i++;
        }
    }
    printf("\n");
    return(0);
}