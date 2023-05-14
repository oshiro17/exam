#include <unistd.h>
#include <stdio.h>

int	ft_itoa(char *str)
{
	int	sign = 1;
	int ret = 0;
	int i = 0;

	if(str[0]== '+' || str[0] == '-')
	{
		i++;
		if(str[0]=='-')
			sign = -1;
	}
	while(str[i]>='0' && str[i]<'9')
	{
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	return (ret*sign);
}
int is_prime(int n)
{
	int i = 2;

	while(i < n)
	{
		if((n % i) == 0)
			return (0);
		i++;
	}
	return(1);
}

void	put_num(int num)
{
	char	c_n;

	if (num / 10 > 0)
		put_num(num / 10);
	c_n = (num % 10) + '0';
	write(1,&c_n,1);
}

int	main(int argc, char **argv)
{
	int i =2;
	int rec = 0;

	if (argc == 2)
	{
	while (i <= ft_itoa(argv[1]))
	{
		// printf("itoa== %d,\n",ft_itoa(argv[1]));
		// printf("itoa== %d,\n",rec);
		if (is_prime(i))
		{
			printf("LINE == %d\n", i);
			rec = rec + i;
		}
		i++;
		// printf("LINE == %d, \n", rec);
	}
	put_num(rec);
	}
	write(1, "\n",1);
	return 0;
}