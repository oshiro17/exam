#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *a)
{
	int i = 0;
	int rec = 0;
	while(a[i])
	{
		rec = rec * 10 - a[i] + '0';
		i++;
	}
	return(rec * -1);
}

void ft_putnum(int i)
{
	char k = 0;
	
	if (i >= 10)
	{
		ft_putnum(i / 10);
	}
	k = i % 10 + '0';
	write(1, &k, 1);
}

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 3)
	{
		int a = ft_atoi(argv[1]);
		int b = ft_atoi(argv[2]);
		
		
		if (a >= b)
			i = a;
		else 
			i = b;
		while(i)
		{
			// printf("a ==%d;b=%d,i =%d\n",a, b ,i);
			if (a % i == 0 && b % i == 0)
			{	ft_putnum(i);
				break;
			}
			i--;
		}
	}
	write(1, "\n", 1);
}