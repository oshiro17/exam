#include <unistd.h>

void ft_putnum(int argc)
{
    char c;

    if (argc >= 10)
        ft_putnum(argc / 10);
    c = (argc % 10) + '0';
    write(1,&c,1);
}

int main(int argc, char **argv)
{
    (void)argv;
    ft_putnum(argc - 1);
    write(1, "\n",1);
    return(0);
}