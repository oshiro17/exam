#include <unistd.h>

int	main(void)
{
	int		i;
	char	num[10] = "0123456789";

	i = 0;
	while (i <= 100)
	{
		if (i != 0 && !(i % 15))
			write(1, "fizzbuzz\n", 9);
		else if (i != 0 && !(i % 3))
			write(1, "fizz\n", 5);
		else if (i != 0 && !(i % 5))
			write(1, "buzz\n", 5);
		else
		{
			if (i < 10)
			{
				write(1, &num[i], 1);
			}
			else
			{
				write(1, &num[i / 10], 1);
				write(1, &num[i % 10], 1);
			}
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}