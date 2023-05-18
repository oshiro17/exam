#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void put_f(int flag, int num)
{
    int i = 1;
    char c;
    int divi = 1;
    while (i < num)
    {
        if ((num % i) == 0)
            divi = i;
        i++;
    }
    if (i != 1 )
        put_f(0, num / divi);
    if (flag == 0)
        write(1, "*", 1);
    c = divi + '0';
    write(1, &c, 1);
    return ;
}
int main(int argc , char **argv)
{
    int num = 0;
    int flag = 1;
    int j = 0;
    int divisor;

    if (argc ==2)
    {
        num = atoi(argv[1]);
       if (num == 1)
            write(1, "1\n",2);
        put_f(flag, num);
    }
    write(1,"\n", 1);
        
}