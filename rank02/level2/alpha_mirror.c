#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	int		al_num;

	i = 0;
	if (argc == 2)
	{	
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				al_num = argv[1][i] - 'A';
				if (al_num >= ('Z' - 'A') / 2)
					argv[1][i] = 'A' + ('Z' - (al_num + 'A'));
				else
					argv[1][i] = 'Z' - ((al_num + 'A') - 'A');
			}
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				al_num = argv[1][i] - 'a';
				if (al_num >= ('z' - 'a') / 2)
					argv[1][i] = 'a' + ('z' - (al_num + 'a'));
				else
					argv[1][i] = 'z' - ((al_num + 'a') - 'a');
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}