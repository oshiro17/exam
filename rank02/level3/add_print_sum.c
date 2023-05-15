#include <unistd.h>
#include <stdio.h>
int ft_atoi(char *s_n)
{
    int sign=1;
    int i=0;
    int res = 0;
    if(s_n[0] == '-'|| s_n[0] == '+')
    {
        if(s_n[0] == '-')
            sign = -1;
        i++;
    }
    while (s_n[i]<= '9' && s_n[i] >= '0')
    {
        res =  (res * 10) + (s_n[i]- 48);
        i++;
    }
    return(res*sign);
}
int is_prime(int num)
{
    int i= 2;
    if (num == 1)
        return(0);
    while(i<num)
    {
        if ((num % i) == 0)
            return(0);
        i++;
    }
    return(1);
    
}
void ft_putnbr(int num)
{
    char res;

    if (num >= 10)
        ft_putnbr(num / 10);
    res = (num % 10) +'0';
    write(1,&res,1);
    
}
int main(int argc, char**argv)
{
    int i=1;
    int num = 0;
    int res = 0;
    if(argc == 2)
    {
        num = ft_atoi(argv[1]);
        while (i <= num)
        {

            printf("_________%d\n",i);
            if (is_prime(i))
                res = res + i;
            
            printf("res:_________%d\n",res);
            i++;
        }
        ft_putnbr(res);
    }
    write(1,"\n",1);
    return(0);
}