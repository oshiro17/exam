#include <unistd.h>
int main (int argc, char **argv)
{
	int i = 0;
	int k = 0;
	
	if (argc == 3)
	{
		while (argv[1][i])
		{
			k = 0;
			while (k < i)
			{
				if (argv[1][i] == argv[1][k])
					break ;
				k ++;
			}
			if (k == i)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			k = 0;
			while (argv[1][k])
			{
				if (argv[2][i] == argv[1][k])
					break ;
				k++;
			}
			if (!argv[1][k])
			{
				k = 0;
				while (k < i)
				{
					if (argv[2][i] == argv[2][k])
						break ;
					k++;
				}
				if (i == k)
					write(1, &argv[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}