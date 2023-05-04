#include <unistd.h>
void	write_alpha(char c, int i)
{
	while (i--)
		write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				write_alpha(argv[1][i], argv[1][i] - 64);
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				write_alpha(argv[1][i], argv[1][i] - 96);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}