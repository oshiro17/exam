#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int	i = 0;
	// int j = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 33 && argv[1][i] <= 126)
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			if ((argv[1][i] == 32 || argv[1][i] == 11))
			{
				while (argv[1][i] == 32 || argv[1][i] == 11)
					i++;
				if (argv[1][i])
					write(1, " ", 1);
			}
		}	
	}
	write(1, "\n", 1);
}