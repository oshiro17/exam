#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = -1;
	num = 0;
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = 1;
		str++;
	}
	while (*str)
	{
		num = num * 10 - (*str - '0');
		str++;
	}
	return (sign * num);
}

int	main (void)
{
	printf("%d\n", ft_atoi("-12300"));
	return(0);
}