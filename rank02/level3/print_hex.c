#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *c)
{
    int i = 0;
    int rec = 0;

    while(c[i])
    {
        rec = (rec * 10) - (c[i] - '0');
        i++;
    }
    return(rec * -1);
}

char itoa16(int i)
{
    if (i >= 0 && i <= 9)
        return(i + '0');
    else
        return(i + 87);
}

void print_6(int i)
{
    int num;
    char c;

    if (i >= 16)
        print_6(i / 16);
    num = i % 16 ;
    c = itoa16(num);
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        print_6(num);
    }
    write(1,"\n",1);
    return 0;
}